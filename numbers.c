#include<stdio.h>
int main()
{
int n=0;
int num;
while(n<=10)
{
printf("enter num");
scanf("%d",&num);
if(num>0)
printf("positive");
else
printf("negative");
n++;
}
}
