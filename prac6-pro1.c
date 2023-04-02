#include<stdio.h>
int cube(int x)
{ return x*x*x;
}
float perimeter(float y)
{ return 2*3.14*y;
}
int s(int z)
{ int a,sum=0;
while(z!=0)
{ a=z%10;
z=z/10;
sum=sum+(a*a);
}
return sum;
}
main()
{ int d,c;
float b;
printf("Enter number whose cube needs to be found out ");
scanf("%d",&d);
printf("The cube is %d\n",cube(d));
printf("Now enter radius of circle whose perimeter is to be found out ");
scanf("%f",&b);
printf("The perimeter of the circle is %f\n",perimeter(b));
printf("Enter number whose sum of sqaure of digits is to be found out ");
scanf("%d",&c);
printf("The sum of squares of digits of the entered number is %d",s(c));
}

