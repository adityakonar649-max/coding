#include<stdio.h>
int main()
{
    printf("Enter 3 numbers : \n");
    int a,b,c,s;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    s=(a+b+c);
    int x=s/3;
    printf("The average of the 3 numbers is : %d",x);
    return 0;

}