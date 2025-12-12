#include <stdio.h>
int main(){
    int a[4][4],i,j,s,md,sd;
    printf("Enter elements:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Element [%d][%d]:\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            s+=a[i][j];
            if(i==j)
                md+=a[i][j];
            if(i+j==3)
                sd+=a[i][j];
        }
    }
    printf("Sum of all elements=%d\n",s);
    printf("Sum of main diagonal=%d\n",md);
    printf("Sum of secondary diagonal=%d\n",sd);
    return 0;
}
