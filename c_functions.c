#include <stdint.h>
#include "header_file.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

int* allocate_array(int size_of_array){
   int* ptr = malloc(size_of_array * sizeof(int));
   return ptr;
}

void initialize_array(int* array_address, int size_of_array){
    if(array_address == NULL){
        printf("\t\tERROR: array could not initalize\n");
    }

    printf("array initalized. Dedicated addresses: %p to %p\n", &array_address, &array_address + (size_of_array - 1));
}

int check_memory(int* array_address, int size_of_array)
{
     if (array_address == NULL) {
        return 0; 
    }
    int* last_element = array_address + (size_of_array - 1);
    return (last_element != NULL) ? 1 : 0;
}

void print_array(int* array_address, int size_of_array)
{

   printf("\t\tHere is your printed array\n");
   printf("[") ;
 
    for(int i = 0; i  < size_of_array; i++){
        int value = *(array_address + i);
        value = i;
       printf("ELEMENT %d",value);  

       if(i<(size_of_array - 1)){
        printf(" ,");
       }
    }
    printf("]\n") ;
}

void deallocate_array(int* array_address)
{
    free(array_address);
}

struct Student create_student(char *student_name, int student_id, float student_grade)
{
    struct Student student;

    strcpy(student.name, student_name);
    student.id = student_id;
    student.grade = student_grade;

    return student;
}

void print_student(struct Student specific_student)
{
    printf("\n\t\tDetails of %s are:\n\n\n", specific_student.name);
    printf("Name: %s\t| ID: %d\t| Grade: %.2f\n", specific_student.name, specific_student.id, specific_student.grade);
}

void free_student(struct Student *specific_student)
{
  
}

void add_student(struct Student students[], int* student_no, struct Student new_student) {
   *(students + (*student_no))= new_student;
    (*student_no)++; 
}

void print_all_students(struct Student students[], int student_no) {
    printf("\n\t\tSTUDENTS LIST\n\n");

    printf("  Name\t\tStudent ID\t     Student Grade\n");
    for (int i = 0; i < student_no; i++) {
        printf("%s\t %d\t\t\t %.2f\n", (*(students + i)).name, (*(students + i)).id, (*(students + i)).grade);
    }
}