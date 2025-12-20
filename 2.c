//Create a program that converts seconds into hours, minutes, and remaining seconds.
#include<stdio.h>
int main(){
    long seconds,hours,minutes,remaining;
    printf("Enter total seconds (positive integer only):");
    if(scanf("%ld",&seconds)!=1){
        printf("Invalid input! Only integers are allowed.\n");
        return 0;
    }
    if(seconds<0){
        printf("Invalid input! Seconds cannot be negative.\n");
        return 0;
    }
    hours=seconds/3600;
    seconds=seconds%3600;
    minutes=seconds/60;
    remaining=seconds%60;
    printf("Hours=%ld\n",hours);
    printf("Minutes=%ld\n",minutes);
    printf("Seconds=%ld\n",remaining);
    return 0;
}
