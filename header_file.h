#ifndef HEADER_FILE_H
#define HEADER_FILE_H
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

int add_int(uint16_t term_1,uint16_t term_2);
int subtract_int(uint16_t term_1,uint16_t term_2);
int multiply_int(uint16_t factor_1,uint16_t factor_2);
int divide_int(uint16_t divisor, uint16_t dividend);

int add_float(float term_1, float term_2);
int subtract_float(float term_1, float term_2);
int multiply_float(float factor_1, float factor_2);
int divide_float(float divisor, float dividend);

int add_byte(uint32_t byte_1, uint32_t byte_2);
int subtract_byte(uint32_t byte_1, uint32_t byte_2);
int multiply_byte(uint32_t factor_1, uint32_t factor_2);
int divide_byte(uint32_t divisor, uint32_t dividend);

int bitwise_and(uint8_t int_a, uint8_t int_b);
int bitwise_or(uint8_t int_a, uint8_t int_b);
int bitwise_xor(uint8_t int_a, uint8_t int_b);
int bitwise_not(uint8_t int_a);

int* allocate_array(int size_of_array);
void initialize_array(int* array_address, int size_of_array);
int check_memory(int* array_address, int size_of_array);
void print_array(int* array_address, int size_of_array);
void deallocate_array(int* array_address);

struct Student{
    char name[50];
    int id;
    float grade;
};

struct Student create_student(char *student_name, int id, float grade);
void print_student(struct Student specific_student);
void free_student(struct Student *specific_student);
void  add_student(struct Student students[], int* student_no,struct Student new_student);
void print_all_students(struct Student students[], int student_no);
#endif 