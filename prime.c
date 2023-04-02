#include<stdio.h>
main()
{ int n,i,result,sign=0;
printf("Enter any positive number of your choice ");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{ result=n%i;
if(result==0)
{ sign=1;
break;
}
}
if(sign==1)
{ printf("Composite number");}
else if(n==1)
{ printf("Neither prime nor composite");
}
else{ printf("prime numer");
}
}

