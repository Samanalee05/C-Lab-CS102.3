#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[3][3]={{3,2,4},{1,4,6},{4,3,2}},arr2[3][3]={{2,6,3},{4,3,2},{5,1,7}};
    int r,c,mSum[3][3];


    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            mSum[r][c]=arr1[r][c]+arr2[r][c];
        }

    }

    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            printf("%d  ",arr1[r][c]);
        }

        if(r==1)
            printf("  +");

        printf("\t");
        for(c=0;c<3;c++){
            printf("%d  ",arr2[r][c]);
        }

        if(r==1)
            printf("  =");

        printf("\t");
        for(c=0;c<3;c++){
            printf("%d  ",mSum[r][c]);
        }
        printf("\n");
    }
}
