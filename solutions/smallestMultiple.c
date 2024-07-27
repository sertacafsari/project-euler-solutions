#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

/**
    * This program finds the all evenly divisible numbers from 1 to 20
    * This is written in C language.
    * @author sbafsari
    * @date 16/06/2024
    * Question Number: 5
*/

bool isEvenlyDivisible(int n);

int main() {

    int smallestMultiple = 1;

    // Looping through all the numbers
    while (true) {
        if (isEvenlyDivisible(smallestMultiple)) {
            break;
        }
        smallestMultiple++;
    }

    // Printing the result
    printf("%d\n", smallestMultiple);   
}

// A function that checks if the number is evenly divisible by all numbers from 1 to 20
bool isEvenlyDivisible(int n) {
    for (int i = 1; i <= 20; i++) {
        if (n % i != 0) {
            return false;
        }
    }

    return true;
}