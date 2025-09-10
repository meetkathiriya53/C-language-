#include<stdio.h>

int main() {
    int a[5], n;
    for(int i = 0; i < 5; i++) {
        printf("enter the number :");
        scanf("%d", &a[i]);
    }
    for(int j = 0; j < 5; j++) {
        for(int i = 0; i < 4 - j; i++) {
            if(a[i] < a[i+1]) {   
                n = a[i];
                a[i] = a[i+1];
                a[i+1] = n;
            }
        }
    }
    for(int i = 0; i < 5; i++)
        printf("%d ", a[i]);
}