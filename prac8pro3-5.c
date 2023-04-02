#include<stdio.h>
struct student
{
int rollno;
char name[20];
int score;
}s[20];
void main()
{

int i, n, a[10],b[10],c[10];
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
for(i=0;i<n;i++)
{ a[i]=s[i].rollno;
b[i]=s[i].name;
c[i]=s[i].score;
}
sort_merit(a,b,c,n);
printf("The Merit List is :\n");
for(i=0;i<n;i++)
{
printf("%d", a[i]);
printf("  %s", b[i]);
printf("  %d\n", c[i]);
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

