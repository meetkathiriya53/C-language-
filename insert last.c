#include <stdio.h>

int main() {
    int a[100],n,m;
    printf("enter the size of array(max 100) :");
    scanf("%d",&n);
    if(n<=100){

    printf("enter the %d elements :",n);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }


    printf("enter the new number add to last :");
    scanf("%d",&m);

    a[n]=m;
     n++;
    for(int i=0;i<n;i++){
        printf("%d",a[i]);}}else{
        printf("invaild input");
        }
    return 0;
}
