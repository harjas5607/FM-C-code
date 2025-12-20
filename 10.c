//Write a Program to Rotate a matrix by 90 degrees in the clockwise direction in C.
#include<stdio.h>
int main(){
    int r,c,i,j,arr[50][50],rotated[50][50];
    printf("Enter rows (max 50):\n");
    if(scanf("%d",&r)!=1||r<=0||r>50){
        printf("Invalid input!\n");
        return 0;
    }
    printf("Enter columns (max 50):\n");
    if(scanf("%d",&c)!=1||c<=0||c>50){
        printf("Invalid input!\n");
        return 0;
    }
    printf("Enter %d elements:\n",r*c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(scanf("%d",&arr[i][j])!=1){
                printf("Invalid input!\n");
                return 0;
            }
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            rotated[j][r-i-1]=arr[i][j];
        }
    }
    printf("\nMatrix rotated 90 degrees clockwise:\n");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d  ",rotated[i][j]);
        }
        printf("\n");
    }
    return 0;
}
