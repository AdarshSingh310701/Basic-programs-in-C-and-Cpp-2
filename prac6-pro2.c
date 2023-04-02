#include<stdio.h>
int tableinput(int x)
{
scanf("%d",&x);
return x;
}
int caltable(int y,int i)
{ 
return y*i;
}
int tableoutput(int z)
{ int j;
for(j=1;j<=10;j++)
{ printf("%d x %d = %d\n",z,j,caltable(z,j));
}
}
main()
{ int num;
printf("Enter number whose multiplication table is required ");
num=tableinput(num);
printf("The multiplication table of the entered number is as follows: \n");
tableoutput(num);
}
  
