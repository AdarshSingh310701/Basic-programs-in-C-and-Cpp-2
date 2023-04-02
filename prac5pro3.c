#include<stdio.h>
main()
{ char str[10];
char *ptr=str;
int count=0,i,count1=0;
 
printf(" Enter any word or sentence\n");
scanf("%[^\n]s",ptr);

  for(i=0;*ptr!=0;i++)
    {count++;
    if(*ptr!=' ')
{ count1++;}
	ptr++;}
printf("The length of the string including spaces is %d\n",count);
   printf("The length of the string not including spaces is %d",count1);
  
}

