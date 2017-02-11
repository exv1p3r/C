#include <stdio.h>

int main(){
    int i;

    char char_array[5] = {'a', 'b', 'c', 'd', 'e'}; //Define a char array
    int int_array[5] = {1, 2, 3, 4, 5}; //Define a int array

    char *char_pointer; //Define a pointer to the char_array
    int *int_pointer; //Define a pointer to the int_array

    char_pointer = char_array; //Set the char_pointer in the begin of the char_array
    int_pointer = int_array; //Set the int_pointer in the begin of the int_array

    for(i=0; i < 5; i++){ //Iterate through the int array with the int_pointer
        printf("[Integer pointer] Points to %p, which contains the integer %d\n", int_pointer, *int_pointer);
        int_pointer = int_pointer + 1;
    }
    for(i=0; i < 5; i++){ //Iterate through the char array with the char_pointer.
        printf("[Char pointer] Points to %p, which contains the char '%c'\n", char_pointer, *char_pointer);
        char_pointer = char_pointer + 1;
    }
}ß