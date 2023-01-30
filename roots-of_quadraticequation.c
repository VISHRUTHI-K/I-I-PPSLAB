#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c,d,root1,root2;
printf("enter values of a,b,c");
scanf("%d%d%d",&a,&b,&c);
d=b*b-4*a*c;
if(d>0)
{
root1=(-b+sqrt(d))/(2*a);
root2=(-b-sqrt(d))/(2*a);
printf("%d%d",root1,root2);
printf("roots are real");
}
else if(d==0)
{
root1=-b/(2*a);
root2=-b/(2*a);
printf("%d%d",root1,root2);
printf("roots are equal");
}
else
printf("roots are imaginary");
return;
}
