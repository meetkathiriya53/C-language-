#include<stdio.h>

int main(){
int count;
for(int i=1;i<=500;i++){
count=0;

for(int j=2 ; j<=i/2 ; j++){
if(i%j==0){
count++;
break;}}
if(count==0){
printf("%d ",i);
}
}

}