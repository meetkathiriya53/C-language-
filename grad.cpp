#include<stdio.h>
int main(){
int mat,phy,che,ave;
printf("enter the mat ");
scanf("%d",&mat);
printf("enter the phy ");
scanf("%d",&phy);
printf("enter the che ");
scanf("%d",&che);
ave=(mat+phy+che)/3;
if(mat<=100 && phy<=100 && che<=100){
if(mat>=35 && phy>=35 && che>=35){

    if(ave>70){
    printf("distinction ");
    }else if(ave>60 && ave<70){
    printf("first ");
    }else if(ave>50 && ave<60){
    printf("second ");
    }else if(ave>35 && ave<60){
    printf("thrid ");
    }else{
    printf("fail");
    }
}else {
    printf("fail ");
}}else{
printf("marks is not valid ");}

return 0;
}