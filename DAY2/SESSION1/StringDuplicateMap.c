#include<stdio.h>
#include<stdbool.h>
int main(){
    char str[]={'a','b','c','b','b'};
    int hash[26]={0};
    for(int i=0;str[i]!='\0';i++){
        char ch=str[i];
        int index=ch-'a';
        if(hash[index]>0){
            printf("Duplicate\n");
            return 0;
        }
        else{
            hash[index]=hash[index]+1;
        }
    }
    printf("No duplicate\n");
}