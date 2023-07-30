#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, originalNum,rem,count=0,ans=0;
    printf("Enter a number: ");
    scanf("%d",&num);

    originalNum=num;

    while(originalNum!=0){
        rem=originalNum%10;
        count++;
        originalNum/=10;
    }

    originalNum=num;

    for(int i=0;i<count;i++){
        rem=originalNum%10;
        ans+=pow(rem,count);
        originalNum/=10;
    }

    if(ans==num)
        printf("%d is an Armstrong number.",num);
    else
        printf("%d is not an Armstrong number.",num);
}
