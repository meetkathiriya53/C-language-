#include <stdio.h>

int main() {
    int n,original, reversed_number = 0, remainder;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    original =n;
    while (n != 0) {
        remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
    }
    printf("%d\n",reversed_number);
    if(original == reversed_number  ){
    printf("the number is palindrome");
    }else {
    printf("the number is not palindrome");
    }
    return 0;
    
    return 0;
}
