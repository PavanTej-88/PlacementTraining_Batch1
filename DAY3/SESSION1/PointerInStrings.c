#include<stdio.h>
int main(){
    char t[]="REVA";
    char *p=t;
    printf("%s\n",p);
    while(*p!='\0'){
        printf("%c",*p);
        p++;
    }
}