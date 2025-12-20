//Implement a recursive function to compress a string by replacing consecutive duplicate characters with their count (e.g., aaabbc becomes a3b2c1).
#include<stdio.h>
#include<string.h>
void compress(char str[],int index,int count){
    if(str[index]=='\0'){
        printf("%d",count);
        return;
    }
    if(str[index]==str[index-1]){
        compress(str,index+1,count+1);
    }
    else{
        printf("%d%c",count,str[index]);
        compress(str,index+1,1);
    }
}
int main(){
    char str[200];
    printf("Enter a string:");
    if(scanf("%199s",str)!=1){
        printf("Invalid input!\n");
        return 0;
    }
    printf("Compressed string:");
    printf("%c",str[0]);
    compress(str,1,1);
    printf("\n");
    return 0;
}
