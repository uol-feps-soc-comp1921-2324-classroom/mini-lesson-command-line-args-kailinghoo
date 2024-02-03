#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    if (argc != 3){
        printf("Usage: %s <number1> <number2>\n", argv[0]);
        return 0;
    }
    int num1, num2;

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    // Calculate and print the sum
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}
