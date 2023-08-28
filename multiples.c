#include <stdio.h>

int main() {
    size_t sum = 0;
    for (size_t i = 1; i <101; i++) {
        if (i % 3 == 0) sum += i;
    }
    printf("The sum of all multiples of 3 between 1 and 100 is %zd.\n", sum);
    return 0;
}