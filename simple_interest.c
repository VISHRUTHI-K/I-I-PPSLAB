#include<stdio.h>
void main()
{
int p,r,t,si;
printf("enter principle,rate and time");
scanf("%d%d%d",&p,&r,&t);
si=((p*r*t)/100);
printf("simple interest=%d",si);
return;
}

OUTPUT:
enter principle,rate and time 7000 7 4
  simple interest=1960
