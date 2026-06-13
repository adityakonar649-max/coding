#include<stdio.h>
void main()
{
    int l,b,a,p;
    printf("Enter the length : ");
    scanf("%d",&l);
    printf("Enter the bredth : ");
    scanf("%d",&b);
    a=l*b;
    p=2*(l+b);
    printf("The area of the rectangle is : %d",a);
    printf("\nThe perimeter of the rectangle is : %d \n",p);
}
