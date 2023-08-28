#include <stdio.h>

int main() {
    size_t sum = 0;
    size_t num = 1;

    while (1) {
        if (sum + num > 10000) {
            num -= 1;
            break;
        }
        sum += num;
        num += 1;
    }
    printf("The sum of numbers from 1 to %zu is %zu.\n", num, sum);
    return 0;
}