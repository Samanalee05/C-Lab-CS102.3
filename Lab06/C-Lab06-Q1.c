#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r,PI=3.14159;

    printf("Enter the radius: ");
    scanf("%f",&r);

    printf("Diameter: %f\n",r*2);
    printf("Circumference: %f\n",2*PI*r);
    printf("Area: %f\n",PI*r*r);
}
