#include <stdio.h>

int main() {
    int a[100],n,pos=0,value;
    printf("enter the size of array (max 100) :");
    scanf("%d",&n);
if(n<=100){
    printf("enter the %d elements :",n);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the value to find possition :");
    scanf("%d",&value);
    for(int i=0;i<n;i++){
            if(value==a[i]){
                pos++;
            }
    }
    if(pos!=0){
        printf("%d is %d number",value,++pos);
    }else{
    printf("invaild input");}
 }else{
        printf("invaild input");
        }
    return 0;
}
