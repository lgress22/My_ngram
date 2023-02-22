#include <stdio.h>
#include <stdlib.h>

#define MAX_ARRAY_SIZE 128

// Count the occurrences of each character in the given string and update the count in the array
void input_array(unsigned int *array, char *string) {
    for (int index = 0; string[index] != '\0'; index++) { // loop through each character in the string
        if (string[index] != '"') { // ignore double quote characters
            array[string[index]]++; // increment the count for the character at the current index of the array
        }
    }
}

// Print the characters in the array that have a count greater than zero
void output_array(unsigned int *array, int size_array) {
    
    for (int index = 0; index < size_array; index++) { // loop through each index in the array
        if (array[index] > 0) { // if the count for the character at the current index is greater than zero
            printf("%c:%u\n", index, array[index]); // print the character and its count, followed by a newline character
        }
    }
}

// Get the command line arguments and count the occurrences of each character in each argument
int main(int argc, char **argv) {
    unsigned int array[MAX_ARRAY_SIZE] = {0}; // initialize the array with zeros
    for (int i = 1; i < argc; i++) { // loop through each command line argument (skipping the first, which is the program name)
        input_array(array, argv[i]); // count the occurrences of each character in the current argument and update the array
    }
    output_array(array, MAX_ARRAY_SIZE); // print the character counts in the array
    return 0;
}