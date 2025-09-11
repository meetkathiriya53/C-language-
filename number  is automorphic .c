#include<stdio.h>

int main() {
    int n,squ,count=0,multi=1,m,z;
    printf("enter the num :");
    scanf("%d",&n);
    z=n;
    squ=n*n;
    while(n>0){
    n=n/10;
    count++;}
    for(int i=0 ;i<count;i++){
    multi*=10;
    }
    m=squ%multi;
    if(z==m){
    printf("yes");
    }else{
    printf("no");
    }
}