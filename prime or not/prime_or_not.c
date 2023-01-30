#include<stdio.h>
void main()
{
int num,flag=0,i;
printf("enter a number");
scanf("%d",&num);
for(i=2;i<num;i++)
{
if(num%i==0)
printf("\nfactors:%d\n",i);
flag++;
}
if(flag==0)
printf("PRIME");
else
printf("NOT PRIME");
return;
}


OUTPUT:
enter a number10
factors:2

factors:5
NOT PRIME
