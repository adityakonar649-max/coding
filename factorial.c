//A program to generate the factorial
#include<stdio.h>
int main()
{
    printf("Enter a number \n");
    int a;
    int b=1;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        b=b*i;
    }
    printf("%d",b);
    return 0;
}