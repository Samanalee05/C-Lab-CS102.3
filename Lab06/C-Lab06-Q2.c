#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;

    printf("Input the first integer: ");
    scanf("%d",&num1);
    printf("Input the second integer: ");
    scanf("%d",&num2);

    if(num1%num2==0)
        printf("\n%d is a multiple of %d.\n",num1,num2);
    else
        printf("\n%d is not a multiple of %d\n",num1,num2);


    return 0;
}
