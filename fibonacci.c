#include<stdio.h>
int fibo(int);

int main(){
int n;
printf("enter the number :");
scanf("%d",&n);
printf("fibonacci\n");
for(int i=0;i<n;i++){
printf("%d  ",fibo(i));
}}

int fibo(int n){
if(n==0 || n==1){
    return 1;
}else{
return (fibo(n-1)+fibo(n-2));
}
}
