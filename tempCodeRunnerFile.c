#include<stdio.h>
void main(){
    //initiated two variables n and i=0 beacuse we want to start the loop from 0 to n//
    int n,i=0;
    printf("Enter number");
    scanf("%d",&n);
    while(i<n){
        printf("%d\n",i*i);
        i++;
    }
}
