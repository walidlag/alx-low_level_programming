#include <stdint.h>
#include <stdio.h>

int mul(int a, int b) {
    return a * b;
}

int sub(int a, int b) {
    return a - b;
}

int add(int a, int b) {
    return a + b;
}

int mod(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        fprintf(stderr, "Error: Modulo by zero\n");
        return 0;
    }
}

int div(int a, int b) {
    if (b == 0) {
        fprintf(stderr, "Error: Division by zero\n");
        return 0;
    }
    return a / b;
}
