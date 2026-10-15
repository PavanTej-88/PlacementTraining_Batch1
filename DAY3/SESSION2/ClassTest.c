#include<stdio.h>
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int temp[3][3];
    int r=3,c=3;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            temp[j][i]=a[i][j];
            temp[i][j]=a[j][i];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",temp[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int temp1[3][3];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(j==1){
            temp1[i][j]=temp[i][j];
            }
            else{
                temp1[i][j]=temp[i][c-1-j];
            }
        }
    }
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",temp1[i][j]);
        }
        printf("\n");
    }

}