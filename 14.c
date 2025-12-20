//Write a program to read a file and count the number of characters, words, and lines in a file.
#include<stdio.h>
int main(){
    FILE *fp;
    char filename[100],ch;
    int chars=0,words=0,lines=0,inWord=0;
    printf("Enter file name to read:\n");
    if(scanf("%s",filename)!=1){
        printf("Invalid filename!\n");
        return 0;
    }
    fp=fopen(filename,"r");
    if(fp==NULL){
        printf("Error! File does not exist or cannot be opened.\n");
        return 0;
    }
    while((ch=fgetc(fp))!=EOF){
        chars++;
        if(ch=='\n')
            lines++;
        if(ch==' '||ch=='\n'||ch=='\t'){
            inWord=0;
        }else{
            if(inWord==0){
                words++;
                inWord=1;
            }
        }
    }
    fclose(fp);
    printf("\nCharacter count:%d\n",chars);
    printf("Word count:%d\n",words);
    printf("Line count:%d\n",lines+1);
    return 0;
}
