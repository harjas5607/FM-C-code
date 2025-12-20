//Develop a program to swap every two adjacent elements in an array using pointers.
#include<stdio.h>
int main(){
    int n,i,arr[100],*p=arr,temp;
    printf("Enter number of elements (1-100):");
    if(scanf("%d",&n)!=1){
        printf("Invalid input! Only integers allowed.\n");
        return 0;
    }
    if(n<=0||n>100){
        printf("Invalid size! Must be between 1 and 100.\n");
        return 0;
    }
    printf("Enter %d integers:\n",n);
    for(i=0;i<n;i++){
        if(scanf("%d",(p+i))!=1){
            printf("Invalid input! Only integers allowed.\n");
            return 0;
        }
    }
    for(i=0;i<n-1;i+=2){
        temp=*(p+i);
        *(p+i)=*(p+i+1);
        *(p+i+1)=temp;
    }
    printf("Array after swapping adjacent elements:\n");
    for(i=0;i<n;i++){
        printf("%d ",*(p+i));
    }
    return 0;
}
