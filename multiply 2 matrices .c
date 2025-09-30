#include <stdio.h>
int main(){
int a[3][3] , b[3][3] , c[3][3] ,col=3,row=3;
for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
printf("a%d%d :",i,j);
scanf("%d",&a[i][j]);
}
}
for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
printf("b%d%d :",i,j);
scanf("%d",&b[i][j]);
}
}
for(int i=0;i<row;i++){
int sum =0;
    for(int j=0;j<col;j++){
        for(int k=0;k<3;k++){
            sum += a[i][k]*b[k][j];
        }
        printf("c[%d][%d] : %d\n",i,j,sum);
        sum=0;
    }
    
}
}