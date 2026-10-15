#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main(){
    char str[50];
    printf("Enter string: ");
    fgets(str,50,stdin);
    str[strcspn(str,"\n")]='\0';
    int hash[26]={0};
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='A'&&str[i]<='Z'){
            char ch=str[i];
            int index=ch-'A';
            hash[index]=hash[index]+1;
        }
        else if(str[i]>='a'&&str[i]<='z'){
            char ch=str[i];
            int index=ch-'a';
            hash[index]=hash[index]+1;
        }
        
        
    }
    //printf("No duplicate\n");
    for(int i=0;i<26;i++){
        printf("%d ",hash[i]);
    }
}