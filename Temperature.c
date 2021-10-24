//temperature degree//

#include<stdio.h>
int main()
{
int celsius;
float fahrenheit;
printf("enter temperature in celsius");
scanf("%d",&celsius);
fahrenheit= (celsius*1.8)+32;
printf("the temperature in fahrenheit=%3.6f",fahrenheit);
}
