#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter size: ");
    scanf("%d",&n);
    int *a=(int *)malloc(n*sizeof(int));
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
    for(int i=0;i<n;i++){
        printf("%d ",*(a+i));
    }
}