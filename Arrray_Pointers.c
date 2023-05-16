
#include <stdio.h>

int main() {
   int a[]={1,2,3,4,5};
   int *p=a;
   printf("%d\n",*(p+1));
   printf("%d\n",*(a+1));
   printf("%d\n",p[1]);
   printf("%d\n",1[p]);
   printf("%d\n",1[a]);

    return 0;
}
