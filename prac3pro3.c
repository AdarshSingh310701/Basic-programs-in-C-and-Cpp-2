#include<stdio.h>
main()
{ int i,n,inarr[n],outarr[n];
 printf("Enter the number of elements in array\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 { printf("Enter the element in arr[%d]: ",i);
 scanf("%d",&inarr[i]);
 }
 for(i=0;i<n;i++)
 { outarr[i]=inarr[n-i-1];
 }
 printf("The reversed array is as follows\n");
for(i=0;i<n;i++)
{printf("Now the element in arr[%d] is %d\n",i,outarr[i]);
}
}


