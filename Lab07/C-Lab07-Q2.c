#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op;
    float n1,n2;
    printf("Menu:\n");
    printf("1: Addition\n");
    printf("2: Subtraction\n");
    printf("3: Multiplication\n");
    printf("4: Division\n");
    printf("Enter your choice: ");
    scanf("%d",&op);

    printf("Enter two numbers: ");
    scanf("%f %f",&n1,&n2);

    switch(op)
    {
        case 1:printf("Result: %.2f\n",n1+n2);break;
        case 2:printf("Result: %.2f\n",n1-n2);break;
        case 3:printf("Result: %.2f\n",n1*n2);break;
        case 4:printf("Result: %.2f\n",n1/n2);break;
        default:printf("Invalid choice.");break;
    }


}
