#include<stdio.h>
struct student
{ int rollno;
char name[50];
int score;
}st[5];
int sort_merit(int a[5])
{ int i,j,temp;
for (i = 0; i < 5; i++)
{
for (j = i + 1; j < 5; j++)
{
if(a[i] < a[j])
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
}
for(i=0;i<5;i++)
{
printf("Roll no=%d\nName=%s\nScore=%d\n",st[i].rollno,st[i].name,a[i]);
}
return 0;}
void main()
{ int i,array[5];
printf("Enter details of 5 students\n");
for(i=0;i<5;i++)
{ printf("Enter Roll no of Student %d\n",i+1);
scanf("%d",&st[i].rollno);
printf("Enter Name of Student %d\n",i+1);
scanf("%s",st[i].name);
printf("Enter score of Student %d\n",i+1);
scanf("%d",&st[i].score);
}
for(i=0;i<5;i++)
{
array[i]=st[i].score;}
printf("The Record of the students Merit wise is as follows: \n");


sort_merit(array);


}

