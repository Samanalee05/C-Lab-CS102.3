#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base,power,count=1,ans=1;

    printf("Enter the base and power: ");
    scanf("%d %d",&base,&power);
    while(count<=power)
    {
        ans=ans*base;
        count++;
    }
    printf("%d",ans);
}
