//Write a program to find the second-largest element in an array using pointers.
#include<stdio.h>
#include<stdio.h>
int main(){
    int n,i;
    int arr[100];
    int *p=arr;
    int max1,max2;
    printf("Enter number of elements (min 2, max 100):");
    if (scanf("%d",&n)!=1){
        printf("Invalid input! Enter integers only.\n");
        return 0;
    }
    if(n<2||n>100){
        printf("Invalid size! Array must have at least 2 elements.\n");
        return 0;
    }
    printf("Enter %d integers:\n",n);
    for(i=0;i<n;i++){
        if(scanf("%d",(p+i))!=1){
            printf("Invalid input! Enter integers only.\n");
            return 0;
        }
    }
    if(*(p)>*(p + 1)){
        max1=*(p);
        max2=*(p + 1);
    }else{
        max1=*(p + 1);
        max2=*(p);
    }
    for(i=2;i<n;i++){
        if(*(p+i)>max1){
            max2=max1;
            max1=*(p+i);
        }
        else if(*(p+i)>max2&&*(p+i)!=max1){
            max2 = *(p + i);
        }
    }
    printf("Second largest element=%d\n",max2);
    return 0;
}
