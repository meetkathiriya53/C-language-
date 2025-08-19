#include<stdio.h>
#include<conio.h>
void main ()
{
   float a,b,c;    //a=leangth,b=breadth
   printf("enter length and breadth:");
   scanf("%f %f",&a,&b);
 c=a*b;
   printf("%f*%f=%f\n",a,b,c);
 c=2*(a+b);
   printf("2*(%f+%f)=%f",a,b,c);
   getch();
}
