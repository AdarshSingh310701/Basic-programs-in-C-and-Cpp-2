#include<stdio.h>
int sum=0,rem;
revfunc(int num){
if(num!=0){
rem=num%10;
sum=sum*10+rem;
revfunc(num/10);
}
else
{
return sum;}

}
int main(){
int n,revnum;
printf("\nEnter any number:");
scanf("%d",&n);
revnum=revfunc(n);
printf("\nAfter reverse the no is :%d",revnum);
return 0;
}

