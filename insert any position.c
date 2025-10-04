#include <stdio.h>

int main() {
    int a[100],n,m,pos;
    printf("enter the size of array (max 100) :");
    scanf("%d",&n);
if(n<=100){
    printf("enter the %d elements :",n);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the possition to add the new number :");
    scanf("%d",&pos);
    if(pos<=n+1){
    for(int i=n;i>=pos;i--){
        a[i]=a[i-1];
    }

    n++;
    printf("enter the new number add to possitionz :");
    scanf("%d",&m);

    a[pos-1]=m;
    for(int i=0;i<n;i++){
        printf("%d",a[i]);}}else{
        printf("invaild input");
        }}else{
        printf("invaild input");
        }
    return 0;
}
