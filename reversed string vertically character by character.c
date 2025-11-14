
#include <stdio.h>

int main() {
    char a[100],b[5]={'a','e','i','o','u'};
    printf("enter the string :");
    gets(a);
    for(int i=0;i<5;i++){
        int count=0;
        for(int j=0;j<strlen(a);j++){

            if(b[i]==a[j]){
                count++;
            }

        }
        printf("%c : %d\n",b[i],count);
    }

    return 0;
}

