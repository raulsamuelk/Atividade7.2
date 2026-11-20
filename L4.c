#include <stdio.h>

union bytes {
    int i;
    unsigned char b[4];
};

int main(void) {
    union bytes u;

    u.i = 0x01020304;

    printf("Bytes: ");

    for (int i = 0; i < 4; i++) {
        printf("0x%02X ", (unsigned int)u.b[i]);
    }

    printf("\n");

    return 0;
}