#include <stdio.h>
#include <stdlib.h>

void sumdifpro(int n1,int n2)
{
    printf("Sum = %d\nDifference = %d\nProduct = %d\n",n1+n2,n1-n2,n1*n2);
}

int main()
{
    int no1,no2;
    printf("Enter two numbers: ");
    scanf("%d %d",&no1,&no2);
    sumdifpro(no1,no2);
}
