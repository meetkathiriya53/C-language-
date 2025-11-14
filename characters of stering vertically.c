#include <stdio.h>

int main() {
    char a[100];

    printf("Enter a string: ");
    gets(a);
    int len=strlen(a);
    for(int i=0;i<=len;i++){
        printf("%c\n",a[i]);
    }
    return 0;
}

