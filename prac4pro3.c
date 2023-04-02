#include<stdio.h>
int main()
{  int i,j,a[10][10],row,col;
printf("Enter the number of rows and columns");
scanf("%d%d",&row,&col);
for(i=0;i<row;i++)
{ for(j=0;j<col;j++)
{
printf(" Enter the element of matrix at [%dx%d]:  ",i+1,j+1);
scanf("%d",&a[i][j]);
}}
printf(" Your entered matrix is : \n");
for(i=0;i<row;i++)
 {
 for(j=0;j<col;j++)
 {printf("%d ",a[i][j]);}
 printf("\n");}
printf("The lower triangular matrix is :\n");
for(i=0;i<row;i++)
 {for(j=0;j<col;j++)
 { if(i>=j)
 { printf("%d ",a[i][j]);}
  else
  {printf("0 ");}}
printf("\n");}
return 0;
}



