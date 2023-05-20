import cv2
import pyfirmata

# IP address of the video stream
video_url = "http://192.168.29.226:8080/"

# Initialize Arduino board
board = pyfirmata.Arduino('COM6')

# Define pin numbers for motor control
motor1_pin1 = 2
motor1_pin2 = 3
motor1_en_pin = 9
motor2_pin1 = 4
motor2_pin2 = 5
motor2_en_pin = 10

# Configure pins as OUTPUT
board.digital[motor1_pin1].mode = pyfirmata.OUTPUT
board.digital[motor1_pin2].mode = pyfirmata.OUTPUT
board.digital[motor1_en_pin].mode = pyfirmata.PWM
board.digital[motor2_pin1].mode = pyfirmata.OUTPUT
board.digital[motor2_pin2].mode = pyfirmata.OUTPUT
board.digital[motor2_en_pin].mode = pyfirmata.PWM

# Create a VideoCapture object with IP address
cap = cv2.VideoCapture(video_url)

# Define motor speed (0-255)
motor_speed = 230

while True:
    # Read frame from the video stream
    ret, frame = cap.read()

    if not ret:
        break

    # Convert the frame to grayscale
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

    # Threshold the image to extract the black line
    _, threshold = cv2.threshold(gray, 100, 255, cv2.THRESH_BINARY)

    # Find contours of the black line
    contours, _ = cv2.findContours(threshold, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

    if len(contours) > 0:
        # Get the largest contour
        largest_contour = max(contours, key=cv2.contourArea)

        # Calculate the centroid of the largest contour
        M = cv2.moments(largest_contour)
        if M["m00"] != 0:
            cx = int(M["m10"] / M["m00"])
            cy = int(M["m01"] / M["m00"])

            # Perform line following based on centroid position
            if cx < 320:  # Turn left
                print("Line")
                board.digital[motor1_pin1].write(1)
                board.digital[motor1_pin2].write(0)
                board.digital[motor1_en_pin].write(motor_speed)
                board.digital[motor2_pin1].write(0)
                board.digital[motor2_pin2].write(1)
                board.digital[motor2_en_pin].write(motor_speed)
            elif cx > 320:  # Turn right
                board.digital[motor1_pin1].write(0)
                board.digital[motor1_pin2].write(1)
                board.digital[motor1_en_pin].write(motor_speed)
                board.digital[motor2_pin1].write(1)
                board.digital[motor2_pin2].write(0)
                board.digital[motor2_en_pin].write(motor_speed)
            else:  # Move forward
                board.digital[motor1_pin1].write(1)
                board.digital[motor1_pin2].write(0)
                board.digital[motor1_en_pin].write(motor_speed)
                board.digital[motor2_pin1].write(1)
                board.digital[motor2_pin2].write(0)
                board.digital[motor2_en_pin].write(motor_speed)
        else:
            # No centroid, stop the motors
            board.digital[motor1_pin1].write(0)
            board.digital[motor1_pin2].write(0)
            board.digital[motor1_en_pin].write(0)
            board.digital[motor2_pin1].write(0)
            board.digital[motor2_pin2].write(0)
            board.digital[motor2_en_pin].write(0)
    else:
        # No contour found, stop the motors
        board.digital[motor1_pin1].write(0)
        board.digital[motor1_pin2].write(0)
        board.digital[motor1_en_pin].write(0)
        board.digital[motor2_pin1].write(0)
        board.digital[motor2_pin2].write(0)
        board.digital[motor2_en_pin].write(0)

    # Display the frame with detected line
    cv2.imshow("Line Detection", threshold)

    # Break the loop if 'q' key is pressed
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# Release the video capture and close all windows
cap.release()
cv2.destroyAllWindows()
