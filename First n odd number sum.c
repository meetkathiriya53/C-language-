#include<stdio.h>

int main(){
int n , sum=0;
printf("enter the number :");
scanf("%d",&n);
for(int i=1 ; i<=n ; i++){
    sum+=2*i-1;
}
printf("sum :%d",sum);
}