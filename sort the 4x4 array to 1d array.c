#include<stdio.h>

int main(){
int a[2][2] ,col=2 ,row=2;
printf("enter the array :");
for(int i=0;i<row;i++){
    for(int j=0;j<row;j++){
    scanf("%d",&a[i][j]);
}
}
 for(int j = 0; j < 5; j++) {
        int n , k=0;
        for(int i = 0; i < 4 - j; i++) {
            if(a[i] > a[i+1]) {
                n = a[i];
                a[i] = a[i+1];
                a[i+1] = n;
            }
        }}
 printf
}

