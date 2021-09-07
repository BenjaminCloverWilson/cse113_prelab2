/**
 * @file ch5_pp1.c
 * @brief Calculates how many digits an integer has.
 * @details It assumes that the number has no more than 4 digits.
 * It works for both positive and negative integers.
 * 
 * @author Benjamin Wilson & Madison Mejia
 * @date Fall 2021
 * @bug None
 * @todo None
 */


#include <stdio.h>

int main(void){

    /* hard-coded variable for testing if statements */
    /* int num = -3740; */

    /* Variable for storing user input */
    int num;

    /* Asks for user input and stores it in variable num */
    printf("Enter an integer with less than 5 digits: ");
    scanf("%d", &num);

    /** 
     * If-else statements that calculate how many digits are in variable num
     * and then prints out the result
     */
    if(num >= -9 && num <= 9){
        printf("\nThe number, %d, has 1 digit.\n\n", num);
    } else if(num >= -99 && num <= -10){
        printf("\nThe number, %d, has 2 digits.\n\n", num);
    } else if(num >= -999 && num <= -100){
        printf("\nThe number, %d, has 3 digits.\n\n", num);
    } else if(num >= -9999 && num <= -1000){
        printf("\nThe number, %d, has 4 digits.\n\n", num);
    } else if(num >= 10 && num <= 99){
        printf("\nThe number, %d, has 2 digits.\n\n", num);
    } else if(num >= 100 && num <= 999){
        printf("\nThe number, %d, has 3 digits.\n\n", num);
    } else if(num >= 1000 && num <= 9999){
        printf("\nThe number, %d, has 4 digiits.\n\n", num);
    } else{
        printf("\nThe number you've chosen is invalid!\n\n");
    }

    return 0;
}