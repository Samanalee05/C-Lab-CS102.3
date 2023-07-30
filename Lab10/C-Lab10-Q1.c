#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10],i,tot=0,max,min;
    float avg;
    for(i=0;i<10;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    max=arr[0];
    min=arr[0];

    for(i=0;i<10;i++){
        tot+=arr[i];
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }

    avg=tot/10.0;
    printf("Maximum value: %d \nMinimum value: %d \nAverage value: %.2f \n",max,min,avg);
    printf("Reverse order of values:");
    for(i=9;i>=0;i--){
        printf(" %d",arr[i]);
    }


    return 0;
}
