//Implement Bubble sort or Selection sort on an array based on the input from the user and on the sorted array perform binary search algorithm to find an
//element
#include<stdio.h>
int main(){
    int n,i,j,choice,temp,key,low,high,mid,found=0,arr[100];
    printf("Enter number of elements (1-100):\n");
    if(scanf("%d",&n)!=1){
        printf("Invalid input! Only integers allowed.\n");
        return 0;
    }
    if(n<=0||n>100){
        printf("Invalid size! Enter between 1 - 100.\n");
        return 0;
    }
    printf("Enter %d integers:\n",n);
    for(i=0;i<n;i++){
        if(scanf("%d",&arr[i])!=1){
            printf("Invalid input! Only integers allowed.\n");
            return 0;
        }
    }
    printf("Enter choice:\n1. Bubble sort\n2. Selection sort\n");
    if(scanf("%d",&choice)!=1){
        printf("Invalid choice input.\n");
        return 0;
    }
    if(choice==1){
        for(i=0;i<n-1;i++){
            for(j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }

    }
    else if(choice==2){
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }

    }
    else{
        printf("Invalid sorting choice!\n");
        return 0;
    }
    printf("Sorted array:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nEnter element to search using Binary Search:\n");
    if(scanf("%d",&key)!=1){
        printf("Invalid input! Must be integer.\n");
        return 0;
    }
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            found=1;
            break;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(found==1)
        printf("%d found at position %d in sorted array.\n",key,mid+1);
    else
        printf("Element not found.\n");

    return 0;
}
