//created by sakshi bhatt
#include <stdio.h>
void decimalToBinary(int decimal) {
    if (decimal == 0) {
        printf("Binary equivalent: 0");
        return;
    }
    int bit;
    printf("Binary equivalent: ");
    for (int i = 31; i >= 0; i--) {
        bit = (decimal >> i) & 1;
        printf("%d", bit);
    }
}
int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    decimalToBinary(decimal);
    return 0;
}
