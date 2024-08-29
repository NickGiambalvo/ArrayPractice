//
//  main.c
//  Lab02-CS211-NGiambalvo
//
//  Created by Nicholas Giambalvo on 2/19/24.
//

#include <stdio.h>
#include <stdlib.h>
#include "Lab02_functions.h"



int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
//    heap memory allocation
    int* data = (int*)malloc(sizeof(int));// new variable on heap with pointer
    printf("The location of data is %p\n",data);
    *data = 38;//changing value
    printf("The value of data is %d\n",*data);
    free(data);// use this to prevent memory leak
    data = NULL;// letting use know data isnt pointing to anything anymore
    printf("\n");
    
//    stack memory allocation
    int stack_data = 10;// creating var on stack
    printf("Value of stack_data is %d\n", stack_data);//print initial value of var
    printf("The location of stack_data is %p\n",&stack_data);// print memory adress of var
    //changing value of stack_data using a pointer
    int *ptr = &stack_data;// getting the memory address of stack_data
    *ptr = 30;// changing value at that memory address
    printf("The location of stack_data is now %d\n",stack_data);
    printf("\n");
    
//    array on stack
    printf("Stack array:\n");
    int stack_array[40];//array of 10 elements
    stack_array[0] = 5;
    stack_array[1] = 10;
    stack_array[2] = 15;
    stack_array[3] = 20;
    stack_array[4] = 25;
    stack_array[5] = 30;
    stack_array[6] = 35;
    stack_array[7] = 40;
    stack_array[8] = 45;
    stack_array[9] = 50;
    for(int i = 0; i<10;i++){
        printf("The value is %d\n",stack_array[i]);
    }
    printf("\n");
    
//    changing a value in stack_array
    int *change_stack_value = &stack_array[0];//creating pointer for array
    *change_stack_value = 75;//changing element 0 from 5 to 75
    printf("New stack array:\n");
    for(int i=0;i<10;i++){
        printf("The value is %d\n",stack_array[i]);
    }
    
    printf("\n");
    
//    array on heap
    printf("Heap array:\n");
    int* heap_array = (int*)malloc(sizeof(int)*12);// array of 12 elements
    *heap_array = 48;// 12elements X 4bytes = 48
    heap_array[0] = 1;
    heap_array[1] = 2;
    heap_array[2] = 3;
    heap_array[3] = 4;
    heap_array[4] = 5;
    heap_array[5] = 6;
    heap_array[6] = 7;
    heap_array[7] = 8;
    heap_array[8] = 9;
    heap_array[9] = 10;
    heap_array[10] = 11;
    heap_array[11] = 12;
    for(int i=0;i<12;i++){
        printf("The value is %d\n",heap_array[i]);
    }
    printf("\n");
    
//    changing a value in stack array
    printf("New heap array:\n");
    int *change_heap_value = &heap_array[4];//creating pointer to change the 5th element
    *change_heap_value = 38;//changing to 38
    for(int i=0;i<12;i++){
        printf("The value is %d\n",heap_array[i]);
    }
    
    free(heap_array);
    heap_array = NULL;
    printf("\n");
    
    
/*    The difference between these is you use * when you want to denote that a var holds a pointer and to get the value pointed to we also use *
        When I do not use * I am just creating a variable which has a location in memory but without using a pointer I can not manipulate the pointer of said variable
 */
//    calling print_all function
    printf("values in print all array:\n");
    int size_of_printing_array = 5;// 5 elements in array
    int *printing_array = make_array(size_of_printing_array);//establishing a pointer to allow make_array to be passed to print_all
    printing_array[0] = 2;
    printing_array[1] = 4;
    printing_array[2] = 6;
    printing_array[3] = 8;
    printing_array[4] = 10;

    print_all(printing_array, size_of_printing_array);
    free(printing_array);
    printing_array = NULL;
    printf("\n");
    
//    Calling function that counts by 10's
    printf("a values:\n");
    int value = 0;
    increase(value);
    printf("\n");
    
//    calling function that counts by 10's using pointer
    printf("p_a values:\n");
    int *other_value = 0;
    alt_increase(other_value);
    printf("\n");
    
//    calling make array function
//    make_array must use malloc because in order to call this function to print_all you have to use a pointer which establishes this array on the heap
    printf("make array:\n");
    int size = 10;
    int *array = make_array(size);
    array[0] = 6;
    array[1] = 25;
    array[2] = 9;
    array[3] = 12;
    array[4] = 18;
    array[5] = 69;
    array[6] = 73;
    array[7] = 58;
    array[8] = 38;
    array[9] = 41;
    
    for(int i = 0; i<size;i++){
        printf("The values for different_array is: %d\n",array[i]);
    }
    
    free(array);
    array = NULL;
    printf("\n");

    return 0;
}

