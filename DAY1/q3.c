#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=5;i>0;i--){
        for(int j=i-1;j>0;j--){
            printf(" ");
        }
        for(int j=0;j<=n-i;j++){
            printf("*");
        }
        printf("\n");
    }
}