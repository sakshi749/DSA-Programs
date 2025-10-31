//created by sakshi
#include <stdio.h>
int countOnes(int num) {
    int count = 0;
    while (num > 0) {
       if (num % 2 == 1) {
            count++;
        }
        num = num / 2;
    }
    return count;
}
int main() {
    int userInput;
    printf("Enter an integer: ");
    scanf("%d", &userInput);
    printf("Number of 1s in %d: %d\n", userInput, countOnes(userInput));
    return 0;
}
