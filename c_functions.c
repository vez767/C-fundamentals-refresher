#include <stdint.h>
#include "header_file.h"

int add_int(uint16_t term_1,uint16_t term_2)
{
    uint16_t sum = term_1 + term_2;
    return sum;
}

int subtract_int(uint16_t term_1,uint16_t term_2)
{
    uint16_t res = term_1 - term_2;
    return res;
}

int multiply_int(uint16_t factor_1,uint16_t factor_2)
{
    uint16_t product = factor_1 * factor_2;
    return product;
}

int divide_int(uint16_t divisor, uint16_t dividend)
{
    uint16_t quotient = divisor / dividend;
    return quotient;
}

int add_float(float term_1, float term_2)
{
    float sum = term_1 + term_2;
    return sum;
}

int subtract_float(float term_1, float term_2)
{
    float res = term_1 - term_2;
    return res;
}

int multiply_float(float factor_1, float factor_2)
{
    float product = factor_1 * factor_2;
    return product;
}

int divide_float(float divisor, float dividend)
{
    float quotient = divisor / dividend;
    return quotient;
}

int add_byte(uint32_t byte_1, uint32_t byte_2)
{
   uint32_t byte_sum = byte_1 + byte_2;
   return byte_sum;
}

int subtract_byte(uint32_t byte_1, uint32_t byte_2)
{
   uint32_t byte_res = byte_1 - byte_2;
   return byte_res;
}

int multiply_byte(uint32_t factor_1, uint32_t factor_2)
{
   uint32_t product = factor_1 * factor_2;
    return product;
}

int divide_byte(uint32_t divisor, uint32_t dividend)
{
   uint32_t quotient = divisor / dividend;
    return quotient;
}

int bitwise_and(uint8_t int_a, uint8_t int_b)
{
    uint8_t result = int_a & int_b;
    return result;
}

int bitwise_or(uint8_t int_a, uint8_t int_b)
{
    uint8_t result = int_a | int_b;
    return result;
}


int bitwise_xor(uint8_t int_a, uint8_t int_b)
{
    uint8_t result = int_a ^ int_b;
    return result;
}


int bitwise_not(uint8_t int_a)
{
    uint8_t result = ~(int_a);
    return result;
}


