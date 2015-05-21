//
//  main.c
//  EEL 2880 Project
//  Chapter 1-6: Controls and Functions
//  This is only part 1, part 2 will be added as time passes.
//
//  Created by Perry R Gabriel on 5/21/15.
//  Copyright (c) 2015 Perry R Gabriel. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(void) {
    
    unsigned int fact = 1;
    unsigned int sqrs = 1;
    unsigned int cube = 1;
    unsigned int pwr = 1;
    
    /*  Problem A:
        Using a nested for loop to find the factorials of even number between 1 - 16.
     */
    for (int i  = 0; i <= 16; i++) {
        if (i % 2) {
            fact *= i;
        }
    }
    printf("The factorial of even numbers is: %d\n", fact);
    
    /*  Problem B:
        Find the squares of even numbers between -16 to 16.
     */
    for (int j = -16; j <= 16; ++j) {
        if (j % 2) {
            sqrs = pow(j, 2);
            printf("The squares of %d is: %d\n", j, sqrs);
        }
    }
    
    /*  Problem C:
        Find the cubes of odd numbers between +17 to -17.
     */
    for (int k = -17; k <= 17; ++k) {
        if (k % 3) {
            cube = pow(k, 3);
            printf("Teh cube of %d is %d\n", k, cube);
        }
    }
    
    /*  Problem D:
        Find the 4th power of all the odd numbers between -13 to 13 using the above square/cube.
    */
    for (int h = -13; h <= 13; ++h) {
        if (h % 2) {
            pwr = pow(h, 4);
            printf("The 4th power of %d is: %d\n", h, pwr);
        }
    }
    return 0; // means the program executed successfully
} // end main
