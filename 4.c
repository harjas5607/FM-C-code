//Create a program to simulate a simple login system with 3 attempts to enter the correct password.
#include<stdio.h>
#include<string.h>
int main(){
    char password[20],correctPass[100];
    int attempts=3;
    printf("Enter password under 100 characters:");
    scanf("%s",correctPass);
    printf("LOGIN SYSTEM (3 attempts allowed)\n");
    while(attempts>0){
        printf("Enter password:");
        scanf("%s",password);
        if(strcmp(password,correctPass)==0){
            printf("Access granted!\n");
            return 0;
        }else{
            attempts--;
            printf("Wrong password! Remaining attempts:%d\n",attempts);
        }
    }
    printf("Access denied! Too many failed attempts.\n");
    return 0;
}
