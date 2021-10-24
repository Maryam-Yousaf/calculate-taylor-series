#include<stdio.h>
int main()
{
int start,size,j,i;



printf("enter value of size");
scanf("%d",&size);
printf("enter value of start");
scanf("%d",&start);

for(i=1;i<=size;i++)

        {
          for(j=i;j<=size;j++)

        {

        if(start>9)
        start=1;
         printf("%d",start);
         start++;


        }
        printf("\n");
    }

}
