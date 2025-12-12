#include <stdio.h>
int main(){
    int n,i,a[100],*p=a,temp;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",(p+i));
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
