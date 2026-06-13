//to learn about functions in c
#include<stdio.h>
int square(int a)
{
    return a*a;
}
int main()
{
    printf("Enter a number \n");
    int b;
    scanf("%d",&b);
    int res=square(b);
    printf("%d",res);
    return 0;
}