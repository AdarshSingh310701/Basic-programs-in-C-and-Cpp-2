#include<stdio.h>
main()
{ int n,arr[10],revarr[10],i;
printf("Enter number of elements in the array");
scanf("%d",&n);
for(i=0;i<n;i++)
{printf("Enter element of First Array at arr[%d]: ",i);
scanf("%d",arr+i);
}
for(i=0;i<n;i++)
{ *(revarr+(n-i-1))=*(arr+i);
}
for(i=0;i<n;i++)
{printf("\nNow the element of Second Array at arr[%d] is: %d",i,*(revarr+i));
} }

