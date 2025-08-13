#include<stdio.h>
int main(){
int a,b;
printf("enter the two num :");
scanf("%d%d",&a,&b);
if(a>b){
    printf("max is %d\n",a);
    printf("min is %d\n",b);
}else{
 printf("max is %d\n",b);
    printf("min is %d\n",a);
}
}
