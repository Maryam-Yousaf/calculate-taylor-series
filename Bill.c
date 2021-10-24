#include <stdio.h>


int main()



{



float bill,units,gst;



printf("enter units : ");



scanf("%f",&units);



if(units<200)
    bill=200*5.12;



    else if(units>200 && units<300)
        bill=(200*5.12)+((units-200)*10.2);



    else if(units>300 && units<700)
        bill=200*5.12+100*10.2+(units-300)*15.45;



    else if(units>700)
        bill=(200*5.12)+100*10.2+400*15.45+(units-700)*17.33;



        gst=0.17*bill;



        bill=bill+gst+15;




        printf("%f",bill);



        return 0;







}
 
