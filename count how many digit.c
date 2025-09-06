#include<stdio.h>

int main(){
int a,b,num=0;
printf("entrr the number :");
scanf("%d",&a);

if(a<0)
a=-a;

for(int i=0;i<100;i++){
if(a>0){
    b=a%10;
    a=a/10;
    num+=1;
}
}

printf("%d",num);
}