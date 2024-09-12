#include<stdio.h>
int main()
{
int i,n,sum;
printf("Enter a number:\n");
scanf("%d",&n);
i=n;
sum = 0;
do
{
sum = sum + i%10;
i++;
i = i/10;
}
while(i>0);
printf("The sum of the digits is %d.\n",sum);
}
