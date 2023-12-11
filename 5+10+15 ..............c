#include<stdio.h>
int main()
{
    int sum=0;
    int i,fin ,st,def;
    printf("start, finish and differance:");
    scanf("%d %d %d",&st,&fin,&def);
  for(i=st ; i<=fin ;i=i+def){

  sum=sum+i;}
printf("sum is %d \n",sum);


return 0; }
