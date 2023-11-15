#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int is_digit(char *str) {
    while (*str) {
        if (*str < '0' || *str > '9') {
            return 0;
        }
        str++;
    }
    return 1;
}

int multiply(char *num1, char *num2) {
    int result = atoi(num1) * atoi(num2);
    return result;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    if (!is_digit(argv[1]) || !is_digit(argv[2])) {
        printf("Error\n");
        return 98;
    }

    int result = multiply(argv[1], argv[2]);
    printf("%d\n", result);

    return 0;
}
