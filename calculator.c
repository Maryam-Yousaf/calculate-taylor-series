#include<stdio.h>
int main()
{
float n1,n2,n3;
char op;
printf("enter numbers");
scanf("%f%c%f",&n1,&op,&n2);
switch(op)
{
case '+':
n3=n1+n2;
printf("the sum of numbers=%f",n3);
break;
case '-':
n3=n2-n1;
printf("the difference of numbers=%f",n3);
break;
case '*':
n3=n2*n1;
printf("the product=%f",n3);
break;
case '/':
n3=n2/n1;
printf("the division=%f",n3);
break;
default:
printf("invalid");
}
}
