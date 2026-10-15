#include<stdio.h>
int f(int);
int main(){
    int n=102;
    printf("%d\n",f(n));
}
int f(int n){
    if(n>100){
        return n-10;
    }
    else{
        return f(f(n+11));
    }
}