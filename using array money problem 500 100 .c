#include <stdio.h>
int main(){
int n,a[9]={500,200,100,50,20,10,5,2,1};
printf("entervl the value :");
scanf("%d",&n);
for(int i=0;i<9;i++){
int count=0;
while(n>0)
{
count=n/a[i];
if(count==0)
break ;
n=n-count*a[i];
printf("%d note of %d\n",count, a[i]);
}

}

}