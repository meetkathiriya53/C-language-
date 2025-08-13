#include<stdio.h>
int main(){
int mat,phy,che,ave,sum;
printf("enter the phy,mat,che is :");
scanf("%d%d%d",&phy,&mat,&che);
sum=mat+phy+che;
ave=sum/3;
if(mat<=100 && phy<=100 &&che<=100){
    printf("sum of all subject :%d\n",sum);
    printf("average of all subject :%d\n",ave);
}else{
printf("marks is not valid");
}
return 0;
}
