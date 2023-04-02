#include<stdio.h>
main()
{ int a,z,sum=0;
printf("Enter any number ");
scanf("%d",&z);
while(z!=0)
{ a=z%10;
z=z/10;
sum=sum+(a*a);}
printf("%d ",sum);
}
