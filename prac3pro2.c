#include<stdio.h>
main()
{ char str[100];
int upper=0,lower=0, i;
printf(" Enter any word or sentence\n");
scanf("%[^\n]s",&str);
for(i=0;str[i]!=0;i++)
{ if(str[i]>='a'&&str[i]<='z')
{ lower++;
}
else if(str[i]>='A'&&str[i]<='Z')
{ upper++;
}
}
printf("The number of lower case characters is: %d\n",lower);
printf("The number of upper case characters is: %d",upper);
}

