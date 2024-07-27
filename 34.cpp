#include <stdio.h>
#include <string.h>
#include <math.h>

int binary_to_decimal(const char *binary) {
    int decimal = 0;
    int length = strlen(binary);
    for (int i = 0; i < length; i++) {
        if (binary[length - 1 - i] == '1') {
            decimal += pow(2, i);
        }
    }
    return decimal;
}

int main() {
    const char *binary_number = "11110111";
    int decimal_number = binary_to_decimal(binary_number);
    printf("The decimal equivalent of %s is %d.\n", binary_number, decimal_number);
    return 0;
}

