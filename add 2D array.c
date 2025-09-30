#include <stdio.h>
int main(){
int a[3][3] , b[3][3] , c[3][3];
for(int i=0;i<2;i++){
for(int j=0;j<2;j++){
printf("a%d%d :",i,j);
scanf("%d",&a[i][j]);
}
}
for(int i=0;i<2;i++){
for(int j=0;j<2;j++){
printf("b%d%d :",i,j);
scanf("%d",&b[i][j]);
}
}
for(int i=0;i<2;i++){
for(int j=0;j<2;j++){
c[i][j]=a[i][j]+b[i][j];
printf("c%d%d :%d\n",i,j,c[i][j]);
}
}}