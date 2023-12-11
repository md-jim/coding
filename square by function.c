#include<stdio.h>
int square(int x)
{int y;
y=x*x ;
return y;}
int main()
{ int sq,a;
   scanf("%d",&a);

   sq = square(a);
   printf("ans is %d",sq);
   return 0;



}
