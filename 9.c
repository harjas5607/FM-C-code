//Take each element of the 4x4 matrix from the user and print it, then add each element from the 4x4 matrix and print the sum, print the sum of both the
//diagonals
#include<stdio.h>
int main(){
    int matrix[4][4],i,j,totalSum=0,diag1=0,diag2=0;
    printf("Enter 16 integers for a 4x4 matrix:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(scanf("%d",&matrix[i][j])!=1){
                printf("Invalid input! Only integers allowed.\n");
                return 0;
            }
        }
    }
    printf("Matrix entered:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d  ",matrix[i][j]);
            totalSum+=matrix[i][j];
            if(i==j){
                diag1+=matrix[i][j];
            }
            if(i+j==3){
                diag2+=matrix[i][j];
            }
        }
        printf("\n");
    }
    printf("\nTotal sum of all elements=%d\n",totalSum);
    printf("Sum of primary diagonal=%d\n",diag1);
    printf("Sum of secondary diagonal=%d\n",diag2);
    return 0;
}
