#include <stdio.h>
void swap(int *num1, int *num2)
{
int temp;
temp = *num1;
*num1= *num2;
*num2= temp;
printf("After swapping in swap function \n");
printf("Value of first number  = %d \n", *num1);
printf("Value of second number = %d \n", *num2);
}
int main()
{
int a, b;
printf("Enter two numbers: ");
scanf("%d%d", &a, &b);
printf("Values before swapping\n");
printf("Value of first number  = %d \n",a);
printf("Value of second number = %d \n",b);
swap(&a,&b);
return 0;
}




