#include<stdio.h>
void main()
{
float p,r,t,i;
printf("Enter the principle amount : ");
scanf("%f",&p);
printf("Enter the rate of interest : ");
scanf("%f",&r);
printf("Enter the time : ");
scanf("%f",&t);
i=(p*r*t)/100;
printf("The Simple interest is : %f \n",i);
}
