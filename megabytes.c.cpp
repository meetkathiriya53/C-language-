#include<stdio.h>
int main(){
float bytes , MB ,GB;
printf("enter the value of bytes :");
scanf("%f",&bytes);
MB=bytes/1024;
GB=MB/1024;
printf("MB is :%f \n", MB);
printf("GB is :%f \n", GB);
}