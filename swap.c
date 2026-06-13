#include<stdio.h>
int main()
{
    printf("Enter the first number \n");
    int a,b,c;
    scanf("%d",&a);
    printf("Enter the second number \n");
    scanf("%d",&b);
    c=b;
    b=a;
    a=c;
    printf("Numbers after swapping \n");
    printf("%d \n",a);
    printf("%d \n",b);
    return 0;
}