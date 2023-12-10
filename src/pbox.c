#include "pbox.h"

// Example permutation table for P-block
unsigned char pBox[32] = {
    16,  7, 20, 21,
    29, 12, 28, 17,
    1,  15, 23, 26,
    5,  18, 31, 10,
    2,   8, 24, 14,
    32, 27,  3,  9,
    19, 13, 30,  6,
    22, 11,  4, 25
};

unsigned int permutePBox(unsigned int data) {
    unsigned int result = 0;
    for (unsigned int i = 0; i < 32; i++) {        
        unsigned int bit = (data >> (32 - pBox[i])) & 0x01;     // Extract the i-th bit from the original data
        result |= (bit << (31 - i));                            // Set the i-th bit in the result using bitwise OR
    }
    return result;
}
