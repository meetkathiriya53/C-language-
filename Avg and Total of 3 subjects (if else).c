#include<stdio.h>
int main()
{int a,b,c,A,T;
printf("Enter marks obtain in three different subjects : ");
scanf("%d%d%d",&a,&b,&c);
if (a<=100 && b<=100 && c<=100){
A =(a+b+c)/3;
printf("average of 3 subjects = %d marks",A);
T =a+b+c;
printf("\nTotal of 3 subjects = %d marks",T);
if (A>=70)
    printf("\nDistinction");
    else if (A>=60 && A<70)
    printf("\nfirst class");
    else if (A>=50 && A<60)
    printf("\nSecond class");
    else if (A>=35 && A<50)
    printf("\nThird class");
    else if (a<35 && b<35 && c<35)
        printf("Fail");
    else
        printf("\nFail");}
        else
            printf("Invalid Input \nMarks should be less than 100 in each subject");

return 0;
}
