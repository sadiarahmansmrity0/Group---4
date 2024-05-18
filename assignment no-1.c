#include <stdio.h>
#include<math.h>
int main()
{
    double a,r;
    double p=3.1416;
    double d,m,l;
    printf("The value of m= ");
    scanf("%lf",&m);
    printf("The value of theta= ");
    scanf("%lf",&a);
    printf("The value of d in micrometer = ");
    scanf("%lf",&d);
    d*=pow(10,3);
    r=a*(p/180);
    l=d*sin(r)/m;
    printf("%The numeric value of the wavelength: %lf\n",l);
    printf("The color of the light: ");
    if (380 <= l && l <= 450)
   {
       printf( "violet");
   }
    else if (450 <l && l <= 485)
    {
     printf("blue");
    }
    else if (485 < l && l <= 500)
    {
        printf("cyan");
    }
    else if (500 < l && l <= 565)
    {
        printf("green");
    }
    else if (565 < l && l <= 590)
    {
        printf("yellow");
    }
    else if (590 < l && l <= 625)
    {
        printf("orange");
    }
    else if (625 < l && l <= 750)
    {
        printf("red");
    }
    else
        {
            printf("Undefined");

        }
//For example: if we want green color light we should give the input of m=1,theta=30 degreee,d=1
    return 0;
}
