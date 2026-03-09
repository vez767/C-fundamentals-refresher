#ifndef HEADER_FILE_H
#define HEADER_FILE_H
#include <stdint.h>

int add_int(uint16_t term_1,uint16_t term_2);
int subtract_int(uint16_t term_1,uint16_t term_2);
int multiply_int(uint16_t factor_1,uint16_t factor_2);
int divide_int(uint16_t divisor, uint16_t dividend);
int add_float(float term_1, float term_2);
int subtract_float(float term_1, float term_2);
int multiply_float(float factor_1, float factor_2);
int divide_float(float divisor, float dividend);

#endif 