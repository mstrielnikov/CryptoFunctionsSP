// test_sbox.c

#include <stdio.h>
#include "sbox.h"

int main() {
    // Test S-box substitution
    unsigned char input = 0x8; // Example 6-bit input
    unsigned char substituted = substituteSBox(input, 1);

    // Display the result
    printf("Input: 0x%02X\n", input);
    printf("Output after SBox substitution: 0x%01X\n", substituted);

    // Test P-box permutation
    input = 0x12345678; // Example input
    unsigned int permuted = permutePBox(input);

    printf("Original Data: 0x%08X\n", input);
    printf("Output after PBox permutation: 0x%08X\n", permuted);

    return 0;
}
