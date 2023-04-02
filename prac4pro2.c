#include<stdio.h>
main()
{ int i,j,row,col,a[10][10],b[10][10],c[10][10];
printf("Enter number of rows and columns");
scanf("%d%d",&row,&col);
for(i=0;i<row;i++)
{for(j=0;j<col;j++)
{ printf(" Enter the element of matrix A at [%dx%d]:  ",i+1,j+1);
scanf("%d",&a[i][j]);}}
printf("\n");
  for(i=0;i<row;i++)
 {for(j=0;j<col;j++)
 {printf(" Enter the element of matrix B at [%dx%d]:  ",i+1,j+1);
 scanf("%d",&b[i][j]);} }
 printf(" Your entered matrix A is : \n");
for(i=0;i<row;i++)
 {for(j=0;j<col;j++)
 {printf("%d ",a[i][j]);}
 printf("\n");}
printf(" Your entered matrix B is : \n");
for(i=0;i<row;i++)
 {for(j=0;j<col;j++)
 {printf("%d ",b[i][j]);}
 printf("\n");}
for(i=0;i<row;i++)
{ for(j=0;j<col;j++)
  c[i][j]=a[i][j]-b[i][j];}
printf(" The Matrix obtained after performing A-B is: \n");
for(i=0;i<row;i++)
{ for(j=0;j<col;j++)
{ printf("%d ",c[i][j]);}
printf("\n");}}

