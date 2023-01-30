#include<stdio.h>
int main()
{
int num,product,num1,i;
printf("enter a number");
scanf("%d",&num);
do
{
printf("enter the number of rows between 1 and 10");
scanf("%d",&num1);
}
while (num1<=0);
for(i=1;i<=num1;i++)
{
product=num*num1;
printf("%d*%d=%d\n",num,i,product);
}
return 0;
}
