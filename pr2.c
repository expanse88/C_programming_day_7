//WAP to print the natural numbers from 1 to n (value of n is user input).
#include<stdio.h>
int main ()
{
int n,i;
printf("Enter a number:");
scanf("%d",&n);
i =1;
do{
printf("%d\n",i);
i++;
}
while(i<=n);
return 0;
}
