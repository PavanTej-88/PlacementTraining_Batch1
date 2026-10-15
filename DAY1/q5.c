#include<stdio.h>
int main(){
    printf("Enter n: ");
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("* ");
        }
        for(int k=n-i-1;k>0;k--){
            printf("  ");
        }
        for(int k=n-i-1;k>0;k--){
            printf("  ");
        }
        for(int j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=n-i-1;j>0;j--){
            printf("* ");
        }
        for(int j=0;j<=i;j++){
            printf("  ");
        }
        for(int j=0;j<=i;j++){
            printf("  ");
        }
        for(int j=n-i-1;j>0;j--){
            printf("* ");
        }
        printf("\n");
    }
}