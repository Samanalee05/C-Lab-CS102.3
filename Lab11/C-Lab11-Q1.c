#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,sum1=0,sum2=0;
    int i;

    printf("Enter the size of array: ");
    scanf("%d",&size);

    int arr1[size];
    for(i=0;i<size;i++)
    {
        printf("Input the %d value to the first array: ",i+1);
        scanf("%d",&arr1[i]);
        sum1=arr1[i]+sum1;
    }
    printf("Scalar sum of array 1 is %d\n\n",sum1);

    int arr2[size];
    for(i=0;i<size;i++)
    {
        printf("Input the %d value to the second array: ",i+1);
        scanf("%d",&arr2[i]);
        sum2=arr2[i]+sum2;
    }
    printf("Scalar sum of array 2 is %d\n\n",sum2);

    int sum[size];
    printf("Vector sum of array 1 & 2\n");
    for(i=0;i<size;i++)
    {
        sum[i]=arr1[i]+arr2[i];
        printf(" %d",sum[i]);
    }

    printf("\n\n");

    printf("Vector product of array 1 & 2\n");

    int tot=0,vproduct[size];
    for(i=0;i<size;i++)
    {
        vproduct[i]=arr1[i]*arr2[i];
        printf(" %d",vproduct[i]);
        tot=tot+vproduct[i];
    }
    printf("\n\nVector product is %d\n",tot);


    int sproduct=0;
    for(i=0;i<size;i++)
    {
        sproduct+=arr1[i]*arr2[i];
    }
    printf("\nScalar product is %d\n",sproduct);

    return 0;
}
