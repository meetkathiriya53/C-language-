#include <stdio.h>

int main() {
    int n, b,remainder,c=0,d;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    d=n;
    while (n != 0) {
        remainder = n % 10;
        n /=10;
        b=remainder*remainder*remainder;
        c+=b;
    }
    if(d==c){
    printf("the given number is Armstrong");
    }else {
    printf("the given number isnot Armstrong");
    }    
}
