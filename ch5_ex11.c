/**
 * @file ch5_ex11.c
 * @brief Prints largest city in area code
 * @details Asks for user input of area code
 * in question, runs through a switch statment to find the largest city
 * associated with the area code inputted. Then it prints out the
 * largest city if the area code is recognized.
 * 
 * @author Benjamin Wilson & Madison Mejia
 * @date Fall 2021
 * @bug none
 * @todo none
 */

#include <stdio.h>

int main(void){

    /*Stores default area code for test input*/
    /*int area_code = 478;*/

    /*Stores area code for user input*/
    int area_code;

    /*Scans for user input to store in area_code*/
    printf("Please input area code to find largest city: ");
    scanf("%d", &area_code);
    
    /*Prints out largest city if variable area code is recognized*/
    switch(area_code){
    case 229:
        printf("\nAlbany\n\n");
        break;
    case 404:
        printf("\nAtlanta\n\n");
        break;
    case 470:
        printf("\nAtlanta\n\n");
        break;
    case 478:
        printf("\nMacon\n\n");
        break;
    case 678:
        printf("\nAtlanta\n\n");
        break;
    case 706:
        printf("\nColumbus\n\n");
        break;
    case 762:
        printf("\nColumbus\n\n");
        break;
    case 770:
        printf("\nAtlanta\n\n");
        break;
    case 912: 
        printf("\nSavannah\n\n");
        break;
    default: 
        printf("\nArea code not recognized\n\n");


    }

    return 0;
}