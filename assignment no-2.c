#include <stdio.h>
#include <math.h>

int main()
{

    double lambda_green = 530e-9;
    int m_green = 3;
    double theta_green_deg = 65.0;

    double lambda_red = 700e-9;
    int m_red = 2;

    double theta_green_rad = theta_green_deg * M_PI / 180.0;


    double d = m_green * lambda_green / sin(theta_green_rad);


    double theta_red_rad = asin(m_red * lambda_red / d);


    double theta_red_deg = theta_red_rad * 180.0 / M_PI;


    printf("The angle for the second-order bright spot for red light is: %.2f degrees\n", theta_red_deg);

    return 0;
}
