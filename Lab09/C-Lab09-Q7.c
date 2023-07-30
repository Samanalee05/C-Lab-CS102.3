#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fno1=0,fno2=1,fno,count=2;
    printf("First 10 numbers of the Fibonacci Sequence: %d %d",fno1,fno2);
    while(count<10)
    {
        fno=fno1+fno2;
        printf(" %d",fno);
        fno1=fno2;
        fno2=fno;
        count++;
    }
}
