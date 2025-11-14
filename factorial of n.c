#include<stdio.h>
int fact(int);
int main(){
int n;
printf("enter the number :");
scanf("%d",&n);
printf("factorial :%d",fact(n));
}

int fact(int n){
int multi;
if(n==1){
    return 1;
}else{
multi=n*fact(n-1);
return multi;
}
}
