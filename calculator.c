# include<stdio.h>
//This is a program to make a functional calculator
int main()
{
    int a,c;
    char b;
    float result=0;
    printf("Calculator :\n");
    scanf("%d",&a);
    scanf(" %c",&b);
    scanf("%d",&c);
    if(b=='+')
    {
        result = a+c;
    }
    if(b=='-')
    {
        result = a-c;
    }
    if(b=='*')
    {
        result = a*c;
    }
    if(b=='/')
    {
        result = a/c;
    }
    printf("%f",result);
    return 0;
}