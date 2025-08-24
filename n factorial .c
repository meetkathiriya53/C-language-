#include<stdio.h>

int main(){
int n , multi=1;
printf("enter the number :");
scanf("%d",&n);
for(int i=1 ; i<=n ; i++){
    multi=i*multi;
}
printf("factorial :%d",multi);
}