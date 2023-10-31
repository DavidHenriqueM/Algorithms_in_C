#include <stdio.h>

void binary(unsigned int x) {
    int i;
    char temp;
    for (i = (sizeof(x) * 8); i >= 0; i--) {
        temp = (x & (1u << i) ? '1' : '0');
        putchar(temp);
    }
    printf("\n");
}

int main(void) {
    unsigned int greatest = 0 - 1;
    printf("%u \n", greatest);
    binary(greatest);
    return 0;
}