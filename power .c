#include<stdio.h>
int main()
{
    int i=1,x,n;
    printf("Enter x and power n \n");
    scanf("%d \n %d", &x, &n);

    while (i<=n)
      
      {
         i = i+1;
      }

    printf("%d to the power %d is %d", x, n);
    return 0;
}
