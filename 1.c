//Write a program to determine if the sum of three user-input integers is even or odd as well as if the number is prime or composite.
#include<stdio.h>
int main(){
    int a,b,c,sum,i,count=0;
    printf("Enter 3 integers:\n");
    if(scanf("%d%d%d",&a,&b,&c)!=3){
        printf("Invalid input! Only integers are allowed.\n");
        return 0;
    }
    sum=a+b+c;
    printf("Sum=%d\n",sum);
    if(sum%2==0){
        printf("Sum is even.\n");
    }else{
        printf("Sum is odd.\n");
    }
    if(sum<=1){
        printf("Sum is neither prime nor composite.\n");
    }else{
        for(i=2;i<=sum/2;i++){
            if(sum%i==0){
                count=1;
                break;
            }
        }
        if(count==0){
            printf("Sum is prime.\n");
        }else{
            printf("Sum is composite.\n");
        }
    }
    return 0;
}
