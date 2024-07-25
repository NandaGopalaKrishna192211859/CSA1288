#include <stdio.h>
#include <string.h>
#include <math.h>

int binaryToDecimal(long long binary) {
    int decimal = 0, i = 0, remainder;
    while (binary != 0) {
        remainder = binary % 10;
        binary /= 10;
        decimal += remainder * pow(2, i);
        ++i;
    }
    return decimal;
}

void decimalToHexadecimal(int decimal, char* hexadecimal) {
    int i = 0, remainder;
    while (decimal != 0) {
        remainder = decimal % 16;
        if (remainder < 10)
            hexadecimal[i++] = 48 + remainder;
        else
            hexadecimal[i++] = 55 + remainder;
        decimal /= 16;
    }
    hexadecimal[i] = '\0';

    int length = strlen(hexadecimal);
    for (int j = 0; j < length / 2; ++j) {
        char temp = hexadecimal[j];
        hexadecimal[j] = hexadecimal[length - j - 1];
        hexadecimal[length - j - 1] = temp;
    }
}

int main() {
    long long binary;
    char hexadecimal[20]; 
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    long long temp = binary;
    while (temp != 0) {
        if (temp % 10 > 1) {
            printf("Invalid binary input.\n");
            return 1;
        }
        temp /= 10;
    }

    int decimal = binaryToDecimal(binary);
    decimalToHexadecimal(decimal, hexadecimal);

    printf("Hexadecimal equivalent: %s\n", hexadecimal);
    return 0;
}

