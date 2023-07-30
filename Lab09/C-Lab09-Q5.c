#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,rev=0;
    printf("Enter a number: ");
    scanf("%d",&num);

    do
    {
        rev=rev*10;
        rev+=num%10;

        num/=10;
    }while(num>0);

    printf("The reversed number is: %d",rev);
}
