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
    uint32_t product = factor_1 * factor_2;
    return product;
}

int divide_int(uint16_t divisor, uint16_t dividend)
{
    uint32_t product = divisor / dividend;
    return product;
}


