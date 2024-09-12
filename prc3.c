#include<stdio.h>
int main()
{
int i,sum,n;
printf("Enter a number:");
scanf("%d",&n);
sum = 0;
i=n;
while(i>0)
{
sum = sum+(i%10);
i = i/10;
}
printf("The sum of the digits is %d.\n",sum);
}
