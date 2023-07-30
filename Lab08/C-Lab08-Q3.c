#include <stdio.h>
#include <stdlib.h>

int main()

{
    int num,i,fact=1;
    printf("Enter an integer: ");
    scanf("%d",&num);

    if(num<0)
        printf("Invalid! Negative numbers do not have factorials.");
    else if(num==0)
        printf("Factorial of 0=1");
    else
        for(i=1;i<=num;i++){
            fact*=i;
        }


   printf("Factorial: %d",fact);

}
