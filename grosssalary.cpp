#include<stdio.h>
int main(){
int gross_salary,discount;
printf("enter the gross salary ");
scanf("%d",&gross_salary);
if(gross_salary>20000){
discount=gross_salary*0.15;
}else if(gross_salary>10000 && gross_salary<20000){
discount=gross_salary*0.1;
}else{
discount=gross_salary*0.05;
}
printf("net salary is :%d",gross_salary-discount);
}