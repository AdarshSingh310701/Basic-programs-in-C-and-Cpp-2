#include <stdio.h>
int power(int base, int x) 
{
if (x!= 0)
return (base*power(base,x-1));
else
return 1;
}
int main() {
int b, a, result;
printf("Enter base number: ");
scanf("%d", &b);
printf("Enter power number(positive integer): ");
scanf("%d", &a);
result = power(b, a);
printf("%d^%d = %d", b, a, result);
return 0;
}


