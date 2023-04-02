#include<stdio.h>
main()
{ int n,sq,cube;
int *p,*p1,*p2;
p=&n;
p1=&sq;
p2=&cube;
printf("Enter the number whose square and cube are required");
scanf("%d",p);
*p1=(*p)*(*p);
*p2=(*p)*(*p)*(*p);
printf("Square and cube= %d %d",*p1,*p2);
}

