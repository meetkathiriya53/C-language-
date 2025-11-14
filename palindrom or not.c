#include<stdio.h>

int main(){
char a[100];
int num=0,i=0,count=0;
printf("enter the word :");
gets(a);
for(int j=0;j<strlen(a)/2;j++){
    if(a[j]!=a[num-j-1]){
        printf("it is not palindrom");
        break;
    }else{
     count++;
     }
}
if(count == strlen(a)/2){
    printf("it is palindrom");
}
}
