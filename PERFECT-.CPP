#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
clrscr();
int n,sum=0,rem,i;

printf("Enter number:\n");
scanf("%d",&n);

for(i=1;i<=(n-1);i++)
{
rem=n%i;
if(rem == 0)
{
sum=sum+i;
}
}
if(n==sum)
{
printf("Entered number is perfect number\n");
}
else
{
printf("Not perfect number\n");
}
getch();
}