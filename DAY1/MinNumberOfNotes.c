#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int t=n;
    int d[7]={100,50,20,10,5,2,1};
    int c=0;
    int i=0;
    int k=100;
    while(n!=0){
        int d1=n/d[i];
        if(d1>0){
            n=n%d[i];
            c+=d1;
        }
        i++;
    }
    printf("%d\n",c);
}