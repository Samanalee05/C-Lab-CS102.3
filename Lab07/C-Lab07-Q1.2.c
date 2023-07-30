#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    switch(num%2)
    {
        case 0:printf("This number is Even.");break;
        default:printf("This number is Odd.");break;
    }
}
