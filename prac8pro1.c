#include<stdio.h>
#include<stdlib.h>
#define MAX 50
struct state_det {
char name[50];
long population;
float literacy;
long income;
}s[MAX];

int main()
{
int n,i,max_lit = 0, max_income = 0;
int t, p;
printf("Enter number of states\n");
scanf("%d",&n);

for(i = 0; i < n; i++)
{
printf("Enter the name of the state %d\n",i+1);
scanf("%s",s[i].name);
printf("Enter the population of the state %d\n",i+1);
scanf("%d",&s[i].population);
printf("Enter the literacy rate of the state %d\n",i+1);
scanf("%f",&s[i].literacy);
printf("Enter the per capita income of the state %d\n",i+1);
scanf("%d",&s[i].income);
}
printf("The records entered by the user are as follows: \n");
for(i = 0; i < n; i++)
{
printf("Name of the state %d is \n%s\n",i+1,s[i].name);
printf("The population of state %d is \n%d\n",i+1,s[i].population);
printf("The literacy rate of state %d is \n%f\n",i+1,s[i].literacy);
printf("The per capita income of state %d is \n%d\n",i+1,s[i].income);
}
max_lit = s[0].literacy;
max_income = s[0].income;

for(i = 1; i < n; i++)
{
if(max_lit < s[i].literacy)  {
max_lit = s[i].literacy;
t = i;
}

if(max_income < s[i].income) {
max_income = s[i].income;
p = i;
}
}

printf("\nThe state with highest literacy is %s and its literacy rate = %f\n",s[t].name, s[t].literacy);

printf("\nThe state with highest income is %s and its per capita income = %ld\n",s[p].name, s[p].income);


return 0;
}
