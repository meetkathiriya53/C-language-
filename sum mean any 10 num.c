#include<stdio.h>

int main(){
int sum=0,mean;
for(int i=1 ; i<=10 ; i++){
int n;
printf("enter the number :");
scanf("%d",&n);
sum+=n;

}
mean=sum/2;
printf("sum :%d\n",sum);
printf("mean :%d\n",mean);
}