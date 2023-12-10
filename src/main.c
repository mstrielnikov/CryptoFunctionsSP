// test_sbox.c

#include <stdio.h>
#include "sbox.h"

int main() {
    // Test S-box substitution
    unsigned char input = 0x8; // Example 6-bit input
    unsigned char output = substituteSBox(input, 1);

    // Display the result
    printf("Input: 0x%02X\n", input);
    printf("Output: 0x%01X\n", output);

    return 0;
}
