#include<stdio.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char **arr=(char **)malloc(n*sizeof(char *));
    for(int i=0;i<n;i++){
        if(i%3==0&&i%5==0){
            arr[i]="FizzBuzz";
        }
        else if(i%3==0){
            arr[i]="Fizz";
        }
        else if(i%5==0){
            arr[i]="Buzz";
        }
        else{
            arr[i]="i";
        }
    }
    return arr;
}