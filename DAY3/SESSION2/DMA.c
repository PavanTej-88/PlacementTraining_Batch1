#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=5;
    int *p=(int *)malloc(n*sizeof(int));
    printf("%p\n",p);
    free(p);
    return 0;
}