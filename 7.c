#include<stdio.h>
int main(){
    int n,i,a[100],*p=a,m1,m2;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    if(p[0]>p[1]){
        m1=p[0];
        m2=p[1];
    }else{
        m1=p[1];
        m2=p[0];
    }
    for(i=2;i<n;i++){
        if(*(p+i)>m1){
            m2=m1;
            m1=*(p+i);
        }else if(*(p+i)>m2&&*(p+i)!=m1){
            m2=*(p+i);
        }
    }
    printf("Second largest element=%d\n",m2);
    return 0;
}
