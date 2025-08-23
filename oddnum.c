#include<stdio.h>

int main(){
int a=0,b=1,n;
printf("enter the number :");
scanf("%d",&n);
for(;a<n;a++){
printf("%d",b);
b+=2;
}
}