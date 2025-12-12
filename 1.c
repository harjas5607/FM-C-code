#include<stdio.h>
int main(){
    int a,b,c,s,i,count=0;
    printf("Enter three integers:\n");
    scanf("%d%d%d",&a,&b,&c);
    s=a+b+c;
    printf("Sum=%d\n",s);
    if(s%2==0)
        printf("The sum is even\n");
    else
        printf("The sum is odd\n");
    if(s<=1){
        printf("Neither prime nor composite\n");
    }
    else{
        for(i=2;i<s;i++){
            if(s%i==0)
                count=1;
        }
        if(count==0)
            printf("Prime number\n");
        else
            printf("Composite number\n");
    }
    return 0;
}
