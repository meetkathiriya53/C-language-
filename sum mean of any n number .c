#include<stdio.h>

int main(){
int a, sum=0,mean;
printf("how many numbers you have:");
scanf("%d",&a);
for(int i=1 ; i<=a ; i++){
int n;
printf("enter the number :");
scanf("%d",&n);
sum+=n;

}
mean=sum/2;
printf("sum :%d\n",sum);
printf("mean :%d\n",mean);
}