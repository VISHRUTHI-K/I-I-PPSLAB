#include<stdio.h>
void main()
{
int percent;
printf("enter percent");
scanf("%d",&percent);
if(percent>=70)
printf("distinction");
else if(percent>=60&&percent<70)
printf("first class");
else if(percent>=50&&percent<60)
printf("second class");
else if(percent>=35&&percent<50)
printf("pass");
else
printf("fail");
//return;
}
