#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1,marks,tot=0;
    float avg;
    while(x<=10)
    {
        printf("Enter marks: ");
        scanf("%d",&marks);
        tot+=marks;
        x++;
    }
    avg=tot/10.0;


    if(avg<50)
        printf("Total marks: %d\nAverage Marks: %.2f\nFail!",tot,avg);
    else
        printf("Total marks: %d\nAverage Marks: %.2f\nPass!",tot,avg);
}
