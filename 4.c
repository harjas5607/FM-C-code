#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[]="admin123";
    int count=3;
    while(count>0){
        printf("Enter password:\n");
        scanf("%s",a);
        if (strcmp(a,b)==0){
            printf("Login successful\n");
            return 0;
        }else{
            count--;
            printf("Incorrect password\nAttempts left:%d\n",count);
        }
    }
    printf("Access denied\nToo many failed attempts\n");
    return 0;
}
