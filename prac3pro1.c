#include<stdio.h>
int main()
{ int arr[10],i,small,large;
float avg,sum;
for(i=0;i<10;i++)
{ printf("Enter element of the arr[%d]\n",i);
scanf("%d",&arr[i]);}
sum=0.0;
for(i=0;i<10;i++)
{ sum+=arr[i];}
avg=sum/10;
printf(" The average of the array is: %.1f\n",avg);
small=arr[0];
for(i=0;i<10;i++)
{ if(arr[i]<small)
small=arr[i];}
printf(" Smallest number in the array is: %d\n",small);
large=arr[0];
for(i=0;i<10;i++)
{ if(arr[i]>large)
large=arr[i];}
printf(" Largest number in the array is: %d\n",large);
return 0;
}
