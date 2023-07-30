#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[3][3],arr2[3][3],mSum[3][3];

    int r,c;

    //array 1
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            printf("Enter a value for first array: ");
            scanf("%d",&arr1[r][c]);
        }
    }

    printf("\nFirst Array:\n");


    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            printf("%d  ",arr1[r][c]);
        }
        printf("\n");
    }

        printf("\n");

    //array 2
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            printf("Enter a value for second array: ");
            scanf("%d",&arr2[r][c]);
        }
    }

        printf("\nSecond Array:\n");


    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            printf("%d  ",arr2[r][c]);
        }
        printf("\n");
    }

    //adding
     for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            mSum[r][c]=arr1[r][c]+arr2[r][c];
        }
     }

     printf("\n");

    //matrix sum
    printf("Matrix Sum:\n");
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            printf("%d  ",mSum[r][c]);
        }
        printf("\n");
    }


}
