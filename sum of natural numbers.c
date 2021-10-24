#include<stdio.h>
int main()
{
int num=1,sum=0;
printf("enter numbers");
scanf("%d",&num);
while(num<=5)
{
sum=sum+num;
num++;
}
printf("sum of numbers=%d",num);
}
