#include<stdio.h>
#include<math.h>
void main()
{
float p,r,t,ci;
p=100;r=4;t=5;
ci=p*pow((1+r/100),t);
printf("compound interest is %f",ci);
return;
}

OUTPUT:
compound interest is 21.67
