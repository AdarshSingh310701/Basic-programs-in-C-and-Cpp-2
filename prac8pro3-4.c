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
sort_merit();
printf("The Merit List is :\n");
for(i=0;i<n;i++)
{
printf("%d", s[i].rollno);
printf("  %s", s[i].name);
printf("  %d\n", s[i].score);
}
}
int sort_merit()
{

struct student temp;
int j,i,n;
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(s[i].score<s[j].score)
{
temp=s[i];
s[i]=s[j];
s[j]=temp;
}
}
}

}

