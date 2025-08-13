#include<stdio.h>
int main(){
float salary , allowance , deduction , net_salary ;
printf("enter the salary :");
scanf("%f",&salary);
allowance =salary*0.1;
deduction =salary*0.01;
net_salary = salary + allowance - deduction ;
printf("the net salary is : %f",net_salary);
}