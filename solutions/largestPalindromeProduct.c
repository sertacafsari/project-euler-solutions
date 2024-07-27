#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>


/**
 * This program finds the largest palindrome made from the product of two 3-digit numbers
 * This is written in C language. 
 *  It works but so slow
 * @author sbafsari
 * @date 16/06/2024
 * Question Number: 4
 */

 bool isPalindrome(int n);

 int main() {
    int largestPalindrome = 0;
    
    // Looping through all the 3-digit numbers
    for (int num1 = 999; num1 >= 100; num1--) {
        for (int num2 = 999; num2 >= 100; num2--) {

            int product = num1 * num2;

            if (product <= largestPalindrome) {
                break;
            }

            if (isPalindrome(product)) {
                largestPalindrome = product;
            }
        }
    }

    // Printing the result
    printf("%d\n", largestPalindrome);
 }

// A function that checks the number is palindrome or not
 bool isPalindrome(int n) {

    // A variable used to store the reverse of the number
    int temp = n;
    int reversed = 0;

    // Reversing the number
    while (n > 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }

    // Checking if the number is palindrome
    if (reversed == temp) {
        return true;
    }

    // Otherwise, return false
    return false;
 }