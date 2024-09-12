 //WAP to take 10 different numbers as input. Print their sum and average.
#include<stdio.h>

int main() {
    int i = 0, num, sum = 0;
    float average;

    while(i < 10) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        sum += num;
        i++;
    }

    average = (float)sum / 10;

    printf("The sum of the 10 numbers: %d\n", sum);
    printf("The average of the numbers: %.2f\n", average);

    return 0;
}
