#include<stdio.h>

int main(){
char a[100];
printf("enter the word :");
gets(a);
int i=0;
while(a[i]!='\0'){
    if(a[i]>='a' && a[i]<='z'){
        a[i]=a[i]-32;
    }else if(a[i]>='A' && a[i]<='Z'){
     a[i]=a[i]+32;;
    }
    i++;
}
    printf("%s",a);
}

