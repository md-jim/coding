#include<stdio.h>
int main()
{
   int num;
   printf("enter the number:");
   scanf("%d",&num);
   if(num>=80 && num<=100)
   printf("A+");
   else if(num>=70 && num<=79)
   printf("A");
  else if(num>=60&& num<=69)
   printf("B");
  else if(num>=50&& num<=59)
   printf("C");
   else if(num>=33&& num<=49)
   printf("D");
  else if(num<33)
   printf("F");

   else printf("wrong number");


   return 0;

}
