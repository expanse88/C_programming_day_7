//WAP to find out reverse of a number.
#include <stdio.h>

int main() {
int number, reversedNumber , digit;
reversedNumber=0;
printf("Enter a number: ");
scanf("%d", &number);

do {
        digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    } while (number != 0);

printf("Reversed Number: %d\n", reversedNumber);

return 0;
}










