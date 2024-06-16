#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * This code is used to find the sum of all multiples of 3 or 5 below a certain limit.
 * This is written in C language.
 * The Question Code: 1
 * @author sbafsari
 * @date 16/06/2024
 */

int main(){

    int n; // The limit 
    scanf("%d", &n);

    // The sum variable
    int sum = 0;

    // Finding the sum of all multiples of 3 and 5
    for(int i = 0; i < n; i++){

        // If the number is divisible by 3 or 5
        if(i % 3 == 0 || i % 5 == 0){

            // Add it to the sum
            sum += i;
        }
    }

    // Print the sum
    printf("The sum: %d\n", sum);

    return 0;
}
