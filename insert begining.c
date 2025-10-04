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

    for(int i=n;i>0;i--){
        a[i]=a[i-1];
    }

    n++;
    printf("enter the new number add to begining :");
    scanf("%d",&m);

    a[0]=m;
    for(int i=0;i<n;i++){
        printf("%d",a[i]);}}else{
        printf("invaild input");
        }
    return 0;
}
