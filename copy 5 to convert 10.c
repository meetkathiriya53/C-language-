#include <stdio.h>

int main() {
   int a[5],b[10]={0};
   printf("enter the array :");
   for(int i=0;i<5;i++){
       scanf("%d",&a[i]);
   }
   for(int i=0;i<5;i++){
      b[2*i]=a[i];
   }
   for(int i=0;i<10;i++){
      printf("%d ",b[i]);
   }
    return 0;
}