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
    printf("enter the possition to the delete number :");
    scanf("%d",&pos);
    if(pos<=n+1){
    for(int i=pos;i<n;i++){
        a[i-1]=a[i];
    }

    n--;
    for(int i=0;i<n;i++){
        printf("%d",a[i]);}}else{
        printf("invaild input");
        }}else{
        printf("invaild input");
        }
    return 0;
}
