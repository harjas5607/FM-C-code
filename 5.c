//Create a program to remove all duplicates from an array of integers.
#include<stdio.h>
int main(){
    int n,i,j,k,arr[100];
    printf("Enter number of elements (1-100):");
    if(scanf("%d",&n)!=1){
        printf("Invalid input! Only integers allowed.\n");
        return 0;
    }
    if(n<=0||n>100){
        printf("Invalid size! Value must be between 1 and 100.\n");
        return 0;
    }
    printf("Enter %d integers:\n",n);
    for(i=0;i<n;i++){
        if(scanf("%d",&arr[i])!=1){
            printf("Invalid input! Only integers allowed.\n");
            return 0;
        }
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(k=j;k<n-1;k++){
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("Array after removing duplicates:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
