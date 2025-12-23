#include<stdio.h>
int main()
{
    printf("      *\n");
    for(int i=0;i<=5;i++)
    {
        for(int j=5-i;j>=1;j--)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
            printf("*");
        }
        for(int j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}