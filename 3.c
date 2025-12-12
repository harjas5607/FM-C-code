#include<stdio.h>
int main(){
    int u,b;
    printf("Enter total units consumed:\n");
    scanf("%d",&u);
    if(u<=100){
        b=u*5;
    }
    else if(u<=300){
        b=(100*5)+(u-100)*8;
    }
    else{
        b=(100*5)+(200*8)+(u-300)*10;
    }
    printf("Total electricity bill=%d rupees\n",b);
    return 0;
}
