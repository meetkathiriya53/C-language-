#include <stdio.h>

int main() {
    int n;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    for(int i=1 ; i<=n/2 ; i++){
    if(n%i==0){
    printf("number is not praim number");
    break ;
    }else{
    printf("number is praim number");
    }}
}
    
