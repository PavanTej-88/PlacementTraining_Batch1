#include<stdio.h>
int main(){
    int n=10;
    int* ptr=&n;
    int *ptr2=NULL;
    printf("%d\n",n);
    printf("%p\n",(void *)&n);
    printf("%p\n",ptr2);
    char ch='A';
    char *x=&ch;
    *x='B';
    printf("%c\n",ch);
}