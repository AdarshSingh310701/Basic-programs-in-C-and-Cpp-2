#include<stdio.h>
struct student
{
int rollno;
char name[20];
int score;
}s[20];
void main()
{

int i, n;
printf("Enter nunmber of students: ");
scanf("%d" ,&n); 
for(i=0;i<n;i++)
{ printf("Enter roll number of student %d: ",i+1);
scanf("%d", &s[i].rollno);
printf("Enter name of student %d: ",i+1);
scanf("%s", s[i].name);
printf("Enter score of student %d: ",i+1);
scanf("%d", &s[i].score);
}

sort_merit(s.rollno,s.name,s.score,n);
printf("The Merit List is :\n");
for(i=0;i<n;i++)
{
printf("%d", s[i].rollno);
printf("  %s", s[i].name );
printf("  %d\n", s[i].score);
}
}
void sort_merit(int a[],int b[],int c[],int n)
{

int temp,flag,place;
int j,i;
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(c[i]<c[j])
{
temp=c[i];
c[i]=c[j];
c[j]=temp;
flag=a[i];
a[i]=a[j];
a[j]=flag;
place=b[i];
b[i]=b[j];
b[j]=place;

}
}
}


}

