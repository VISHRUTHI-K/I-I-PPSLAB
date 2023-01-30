#include<stdio.h>
void main()
{
int a=0,b=1,i,n,c;
printf("enter the no of terms required in the sequence");
scanf("%d",&n);
printf("%d\t%d\t",a,b);
for(i=3;i<=n;i++)
{
c=a+b;
printf("%d\t",c);
a=b;
b=c;
}
return;
}
