#include <stdio.h>

int main() {
    int a[100],n,m;
    printf("enter the size of array (max 100) :");
    scanf("%d",&n);
if(n<101){
    printf("enter the %d elements :",n);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("deleat the first element\n");
     for(int i=0;i<n;i++){
       a[i]=a[i+1];
    }
       n--;
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    }else{
        printf("invaild input");
        }
    return 0;
}

