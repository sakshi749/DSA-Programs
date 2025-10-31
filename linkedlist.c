#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
main(){
    int a[]={2,4,5,6,7,8,9,10};
    int n=8;
    for(int i=0;i<n/2;i++){
        a[i]=a[n-i-1];
        int temp;
        temp=a[i];
        a[n-i-1]=temp;

    }
    for(int i=0;i<8;i++){
        printf("%d\n",a[i]);
    }
}