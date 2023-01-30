#include<stdio.h>
void main()
{
int n,num,r,sum=0,rev=0;
printf("enter a number");
scanf("%d",&num);
n=num;
while(n>0)
{
r=n%10;
sum=sum+r;
rev=(rev*10)+r;
n=n/10;
}
if(num==rev)
{
printf("PALINDROME");
}
else
printf("NOT A PALINDROME");
return;
}
