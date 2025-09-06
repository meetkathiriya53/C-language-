#include<stdio.h>

int main(){
int a,b,c;
printf("entrr the number :");
scanf("%d",&a);

if(a<0)
a=-a;

for(int i=0;i<100;i++){
if(a>0){
    b=a%10;
    a=a/10;
    
    printf(" %d ,",b);}
    
}
}