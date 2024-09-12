 //WAP to print the natural numbers from n to 1(value of n is user input).
#include<stdio.h>
int main()
{
int n,i;
printf("Enter a number:");
scanf("%d",&n);
i=n;
while(i>=1){
	printf("%d\n",i);	
	i--;
}

}
