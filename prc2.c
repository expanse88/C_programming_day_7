#include<stdio.h>
int main()
{
int i,sum,n;
printf("Enter a number:");
scanf("%d",&n);
sum = 0;
for(i=n;i>0;i=i/10){	
sum = sum + (i%10);
}
printf("The sum of the digits is %d",sum);
}

