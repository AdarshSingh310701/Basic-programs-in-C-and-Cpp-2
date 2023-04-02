#include <stdio.h> 
struct student 
{  int rollno;  
char name[80];  
int score; 
}; 
void read(struct student stu[], int n); 
void print(struct student stu[], int n); 
void sort_merit(struct student stu[], int n); 
int main() 
{  struct student stu[80]; 
	 int n;  printf("Enter number of records : ");  
	 scanf("%d", &n);  
	 read(stu, n);  
	 printf("\nBefore sorting");  
	 print(stu, n);  
	 sort_merit(stu, n); 
	 printf("\nAfter sorting");  
	 print(stu, n); 
	  return 0; 
}  void read(struct student stu[80], int n) 
{ int i;  for (i = 0; i < n; i++) 
 {  printf("\n\nEnter data for student #%d", i + 1); 
  
 printf("\nEnter rollno : "); 
  scanf("%d", &stu[i].rollno);  
  printf("Enter name : "); 
   scanf("%s",stu[i].name); 
    printf("Enter score : ");  
	scanf("%d", &stu[i].score); 
 }  } void print(struct student stu[80], int n){ 

	 int i; 
  
 printf("\n\nRollno\tName\tscore\n");  
 for (i = 0; i < n; i++) 
 {  printf("%d\t%s\t%d\n", stu[i].rollno, stu[i].name, stu[i].score);  }  } 
 void sort_merit(struct student stu[80], int n) 
{ 
 int i, j; 
 struct student temp; 
  
 for (i = 0; i < n - 1; i++) 
 {  for (j = 0; j < (n - 1-i); j++) 
 {  if (stu[j].score < stu[j + 1].score) 
 {  temp = stu[j]; 
  stu[j] = stu[j + 1]; 
   stu[j + 1] = temp; 
 }  } 
 } 
} 

