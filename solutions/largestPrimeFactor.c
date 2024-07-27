#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>


/**
    * This program finds the largest prime factor of a number
    * This is written in C language.
    * @author sbafsari
    * @date 16/06/2024
    * Question Number: 3
*/


int main() {
    long long int input = 0;

    //Taking input from the user
    scanf("%lld", &input);

    //Finding the largest prime factor
    long long int largestPrimeFactor = 0;

    // Applying Sieve of Eratosthenes 

    // Dividing the number by 2 until it is odd
    while (input % 2 == 0)
    {
        largestPrimeFactor = 2;
        input = input / 2;
    }

    // Dividing the number by odd numbers starting from 3
    for (int i = 3; i <= sqrt(input); i = i + 2)
    {
        while (input % i == 0)
        {
            largestPrimeFactor = i;
            input = input / i;
        }
    }

    // If the number is a prime number greater than 2
    if (input > 2)
    {
        // The largest prime factor will be the number itself
        largestPrimeFactor = input;
    }

    //Printing the result
    printf("%lld\n", largestPrimeFactor);
}
