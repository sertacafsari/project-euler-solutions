/**
 * This program finds the line number of the largest exponential in the file
 * This is written in C language.
 * @author sbafsari
 * @date 16/06/2024
 * Question Number: 99
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    // Open the file
    FILE *file = fopen("./inputTextFiles/0099_base_exp.txt", "r");

    // Check if the file is opened successfully
    if (file == NULL)
    {
        printf("There is an issue during opening the file\n");
        return 1;
    }

    // Initializing the variables
    int line = 0, maxLine = 0;
    double base, exp, max = 0.0;

    // Looping through the file
    while (fscanf(file, "%lf,%lf", &base, &exp) == 2)
    {   
        // Increasing the line number
        line++;

        // Calculating the exponential number
        double result = exp * log(base);

        // Checking if the result is greater than the maximum value
        if (result >= max)
        {

            // Then updating the maximum value and line number of that value
            max = result;
            maxLine = line;
        }
    }

    // Close the file
    fclose(file);

    // Print the result
    printf("Line: %d\n", (int)maxLine);
    return 0;
}
