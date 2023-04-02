#include<stdio.h>
int main()
{ int i,j,a[10][10],sum,row,col;
printf("Pls enter the number of rows and columns");
scanf("%d %d",&row,&col);
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
printf("Therefore the sum of each row of a matrix is : \n");
for(i=0;i<row;i++)
{ sum=0;
for(j=0;j<col;j++)
{ 
  sum+=a[i][j];}
printf("%d\n",sum);
}
return 0;
}


