#include<stdio.h>
void main()
{
int a=3,b=4,c=5,max,min;
max=(a>=b&&a>=c)?a:(b<=a&&b<=c)?b:c;
min=(a<=b&&a<=c)?a:(b<=a&&b<=c)?b:c;
printf("the maximum and minimum are%d%d respectively",max,min);
return;
}

OUTPUT:
the maximum and minimum are 5 3 respectively
