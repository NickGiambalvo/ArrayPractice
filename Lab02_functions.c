//
//  Lab02_functions.c
//  Lab02-CS211-NGiambalvo
//
//  Created by Nicholas Giambalvo on 2/20/24.
//

#include "Lab02_functions.h"
#include <stdio.h>
#include <stdlib.h>


//prints all values of this array
void print_all(int *print_all_array, int size){
    int i = 0;
    while(i<size){
        printf("The values are: %d\n",print_all_array[i]);
        i++;
    }
}

//increasing a by 10
void increase (int a){
    for(int a = 0;a <= 100; a+=10){
        printf("This value of a is: %d\n",a);
    }
}
//another way of increasing by 10
void alt_increase(int* p_a){
    for(int p_a = 0; p_a <= 100; p_a+=10){
        printf("The value of p_a is: %d\n",p_a);
    }
    free(p_a);
    p_a = NULL;
    
}
// creating an array of ints the size of whatever size is inputted
int* make_array(int size){
    
    int *different_array = (int*)malloc(size * sizeof(int));// allocates memory for an array
    if(different_array == NULL){// if statement that will give an exit code if their is nothing in it
        printf("There is nothing in the array\n");
        exit(1);
    }
    for(int i =0; i< size; i++){// going through the array
        different_array[i] = 0;
    }
    return different_array;

}
