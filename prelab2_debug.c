/* We found 8 bugs. */

/* There needs to be a .h following stdio */
#include <stdio>


/* Needs to be int and not void before main. The void can be inside the parentheses. */
void main()
{
    char input;

    printf("Enter a character: \n");
/*This is scanning for a float value and not a char. It needs to be %c for a char.
 * It also needs an & before input.*/
    scanf("%f", input);

    switch (input){
    case 'a':
            printf("A is for apple.\n");
/* Needs to be a break here. */          

/* There is a semicolon instead of a colon after case 'b' */
    case 'b';
            printf("B is for Banana!/n");
/* In line 21, /n should be \n */
            break;
    default:
/* It should be %c for a char, not %d (which is for integers) */
            printf("The letter %d isn't important!\n", input);
    
    }

    return 0;
}