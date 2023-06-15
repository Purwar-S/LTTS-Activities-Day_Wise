/*
5. Write a function to accept an integer (32 bits) and operation type to do the following and return the result to main function.
    - Set 1st bit, if operation type is 1
    - Clear 31st bit, if operation type is 2
    - Toggle 16th bit, if operation type is 3
   You can consider the below function prototype,
    - bit_operations(int num, int oper_type);
*/

#include <stdio.h>

unsigned int bit_operations(unsigned int num, int oper_type) {
    switch (oper_type) {
        case 1:  // Set 1st bit
            num |= 1u;
            break;
        case 2:  // Clear 31st bit
            num &= ~(1u << 31);
            break;
        case 3:  // Toggling 16th bit
            num ^= (1u << 16);
            break;
        default:
            printf("Invalid operation type.\n");
            break;
    }
    return num;
}

int main() {

    unsigned int num = 305419896;  
    int oper_type = 2;             
    printf("Before operation: %u\n", num);
    unsigned int result = bit_operations(num, oper_type);
    printf("After operation:  %u\n", result);
    return 0;

}
