#include <stdio.h>

int main() {
    char c[4];
    int i[4];
    short s[4];
    double d[4];

    printf("Character array:\n");
    for (int j = 0; j <= 3; j++) {
        printf("%p\n", &c[j]);
    }

    printf("Integer array:\n");
    for (int j = 0; j <= 3; j++) {
        printf("%p\n", &i[j]);
    }

    printf("Short array:\n");
    for (int j = 0; j <= 3; j++) {
        printf("%p\n", &s[j]);
    }

    printf("Double array:\n");
    for (int j = 0; j <= 3; j++) {
        printf("%p\n", &d[j]);
    }

    return 0;
}

