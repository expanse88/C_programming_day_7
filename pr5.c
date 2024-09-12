 //WAP to find out sum of digits of a number.
#include<stdio.h>
int main()
{
int i,n;
printf("Enter a number:");
scanf("%d",&n);

//i=n;
//for(i=0;i%10==0;i=i/10){
//i+=

for (i=0; n != 0; n /= 10) {
        i += n % 10;
}
printf("The sum of the digits of the given number is:%d",i);
}
