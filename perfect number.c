#include <stdio.h>

int main() {
    int n, sum=0,b;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
     b=n;
     for(int i=1;i<=n/2;i++){
     if(n%i==0)
     sum+=i;
     }
    if(b==sum){
    printf("number is perfect number");
    }else{
    printf("number is not perfect number");}
}
    