#include<stdio.h>
int main()
{
   char ch;
   scanf("%c",&ch);

   if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
   printf("%c is vowel",ch);}

   else
       printf("%c is conconent",ch);
   return 0;

}
