#include <stdio.h>

void decimal_to_octal(int decimal) {
    int octal[100], i = 0;
    while (decimal != 0) {
        octal[i++] = decimal % 8;
        decimal = decimal / 8;
    }
    printf("The octal equivalent is: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}

int main() {
    int decimal_number = 55;
    decimal_to_octal(decimal_number);
    return 0;
}

