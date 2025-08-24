#include <stdio.h>

int main() {
    unsigned int a = 10;  // 00001010 in binary
    printf("a << 2 = %u\n", a << 2); // 00101000 = 40
    printf("a >> 1 = %u\n", a >> 1); // 00000101 = 5

    
    return 0;
}
