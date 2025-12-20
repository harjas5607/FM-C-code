//Write a C program to print equilateral triangle or Pyramid star pattern series of n rows using.
#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter number of rows (positive integer):");
    if(scanf("%d",&n)!=1){
        printf("Invalid input! Only integers allowed.\n");
        return 0;
    }
    if (n<=0){
        printf("Invalid number of rows.\n");
        return 0;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
