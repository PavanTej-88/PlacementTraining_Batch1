#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int *a=(int *)malloc(10*sizeof(int));
    for(int i=0;i<10;i++){
        *(a+i)=0;
    }
    while(n!=0){
        a[n%10]++;
        n=n/10;
    }
    for(int i=0;i<10;i++){
        printf("%d ",*(a+i));
    }
}