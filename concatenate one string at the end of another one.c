#include<stdio.h>

int main(){
char a[200],b[100];
printf("enter the first word :");
gets(a);
printf("enter the second word :");
gets(b);
strcat(a,b);
puts(a);
}

