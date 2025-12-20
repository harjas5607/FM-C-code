//Create a recursive function to find the nth term of the Fibonacci series.
#include<stdio.h>
int fib(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    printf("Enter value of n (non-negative integer):");
    if (scanf("%d", &n)!=1){
        printf("Invalid input! Only integers allowed.\n");
        return 0;
    }
    if(n<0){
        printf("Invalid! Fibonacci index cannot be negative.\n");
        return 0;
    }
    printf("Fibonacci term at position %d is %d\n",n,fib(n));

    return 0;
}
