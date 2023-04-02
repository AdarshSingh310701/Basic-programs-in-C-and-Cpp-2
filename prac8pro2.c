#include<stdio.h>
struct state
{ char name[50];
int num_district;
};
struct population
{ int men;
int women;
};
struct information
{ struct state st;
struct population pop;
}info[50];
void main()
{ 
int n,i;
printf("Enter number of states ");
scanf("%d",&n);
for(i = 0; i < n; i++)
{
printf("Enter the name of state %d\n",i+1);
scanf("%s",info[i].st.name);
printf("Enter the number of districts of state %d\n",i+1);
scanf("%d",&info[i].st.num_district);
printf("Enter men's population of state %d\n",i+1);
scanf("%d",&info[i].pop.men);
printf("Enter women's population of state %d\n",i+1);
scanf("%d",&info[i].pop.women);
}
printf("The records entered by the user are as follows: \n");
for(i = 0; i < n; i++)
{
printf("The name of state %d is \n%s\n",i+1,info[i].st.name);
printf("The number of districts of state %d is \n%d\n",i+1,info[i].st.num_district);
printf("Men's population of state %d is \n%d\n",i+1,info[i].pop.men);
printf("Women's population of state %d is \n%d\n",i+1,info[i].pop.women);
}
for(i = 0; i < n; i++)
{ if(info[i].pop.men>info[i].pop.women)
{
printf("The state %s has population of men more than women\n",info[i].st.name);
}}
}

