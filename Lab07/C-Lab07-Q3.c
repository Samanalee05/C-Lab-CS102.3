#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    float radius,PI=3.14159;

    printf("Menu:\n");
    printf("1: Circumference of a Circle\n");
    printf("2: Area of a Circle\n");
    printf("3: Volume of a Sphere\n");

    printf("Enter your choice: ");
    scanf("%d",&choice);

    printf("Enter the radius: ");
    scanf("%f",&radius);

    switch(choice){
        case 1:printf("Circumference: %.2f\n",2*PI*radius);break;
        case 2:printf("Area: %.2f\n",PI*radius*radius);break;
        case 3:printf("Volume: %.2f\n",4/3*PI*radius*radius*radius);break;
        default:printf("Invalid Choice");break;}
}
