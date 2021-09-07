/**
 * @file ch5_pp7.c
 * @brief Finds the largest and smallest of four integers.
 * @details No other description
 * 
 * @author Benjamin Wilson & Madison Mejia
 * @date Fall 2021
 * @bug None
 * @todo None
 */

 #include <stdio.h>

 int main(void){

    /* hard-coded values to test if statements */
    /*
    int a = 4;
    int b = 75;
    int c = 100;
    int d = -460;
    */

    /* Variables for storing user input */
    int a;
    int b;
    int c;
    int d;

    /* Variables for storing largest and smallest integers */
    int small_one;
    int small_two;
    int big_one;
    int big_two;

    printf("Enter four different integers with only one space between them: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    /* Determines which of the first two integers are bigger or smaller */
    if(a < b){
        small_one = a;
        big_one = b;
    } else {
        small_one = b;
        big_one = a;
    }

    /* Determines which of the third and fourth integers are bigger or smaller */
    if(c < d){
        small_two = c;
        big_two = d;
    } else {
        small_two = d;
        big_two = c;
    }

    /* Determines which of the two smaller numbers is the smallest */
    if(small_one < small_two){
        printf("\nSmallest: %d\n", small_one);
    } else {
        printf("\nSmallest: %d\n", small_two);
    }

    /* Determines which of the two larger numbers is the largest */
    if(big_one < big_two){
        printf("Largest: %d\n", big_two);
    } else {
        printf("Largest: %d\n", big_one);
    }

    return 0;
 }