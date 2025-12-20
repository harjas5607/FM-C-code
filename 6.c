//Implement a program count the number of vowels and consonants in the given string as well as to scramble the characters of a string randomly.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    char ch,str[200];
    int i,length=0,vowels=0,consonants=0,temp,pos;
    printf("Enter a string:");
    if(scanf("%199[^\n]",str)!=1){
        printf("Invalid input!\n");
        return 0;
    }
    for(i=0;str[i]!='\0';i++)
        length++;
    for(i=0;i<length;i++){
        ch=str[i];
        if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')){
            if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }
    }
    printf("Vowels:%d\n",vowels);
    printf("Consonants:%d\n",consonants);
    srand(time(NULL));
    for(i=length-1;i>0;i--){
        pos=rand()%(i+1);
        temp=str[i];
        str[i]=str[pos];
        str[pos]=temp;
    }
    printf("Scrambled string:%s\n",str);
    return 0;
}
