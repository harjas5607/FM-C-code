#include<stdio.h>
int main(){
    int t,h,m,s;
    printf("Enter total seconds:\n");
    scanf("%d",&t);
    h=t/3600;
    m=(t%3600)/60;
    s=t%60;
    printf("Hours=%d\n",h);
    printf("Minutes=%d\n",m);
    printf("Seconds=%d\n",s);
    return 0;
}
