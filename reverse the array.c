#include <stdio.h>
int main(){
int a[5],n;
printf("enter the size of array (max 5):");
scanf("%d",&n);
if(n<5){
printf("enter the %d elements :",n);
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(int i=0;i<n/2;i++){
        int t;
    t=a[i];
    a[i]=a[n-1-i];
    a[n-1-i]=t;
}
printf("reverse the array :");
for(int i=0;i<n;i++){
    printf("%d\t",a[i]);
}}else{
printf("wrong input");
}}
