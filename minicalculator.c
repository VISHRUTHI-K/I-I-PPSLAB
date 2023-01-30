#include<stdio.h>
void main()
{
float first_num,sec_num;
float add,subtract,multiply,divide;
int choice,modulus;
printf("enter first_num :");
 scanf("%f",&first_num);
 printf("enter sec_num :");
 scanf("%f",&sec_num);
 printf("enter choice \n1: ADD \n2:SUB \n3:MUL \n4:DIV \n5:MOD \nother then this number or letter exit\n");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:add=first_num+sec_num;
 printf("\nsum of two numbers is %f",add);
 break;
 case 2:subtract=first_num-sec_num;
 printf("\ndifference of two numbers is %f",subtract);
 break;
 case 3:multiply=first_num*sec_num;
 printf("\nproduct of two numbers is %f",multiply);
 break;
 case 4:divide=first_num/sec_num;
 printf("\nquotient of two numbers is %f",divide);
 break;
 case 5:modulus=(int)first_num%(int)sec_num;
 printf("\nremainder of two numbers is %d",modulus);
 break;
 default:printf("\nenter a number of your choice between 1 and 5");
 break;
 printf("\nhere's the end of switch case ");
 return;
 }
  }
