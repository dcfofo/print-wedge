/*
 * File: a5p2.c 
 * Author: Danny Ford 100101912
 * Date: 2015/10/07
<<<<<<< HEAD
 * Version: 1.3
=======
 * Version: 1.2
>>>>>>> d64053e955bfdb71494c26218da5cbf475745d29
 *
 * Purpose: This program takes in two parameters (size and type) 
 * and uses the printWedge() function to output a triangle according
 * to the given parameters. The function outputs nothing if size
 * is < 1 or > 25. The function displays a triangle of numbers drawn
 * in a triangle with size rows and size columns, except for the
 * centered version. The first row includes all numbers from 1 to size.
 * Each succesive row shows one less number, until the bottom row shows
 * only one number, size.
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
 * Name:        printWedge(int size, char type)
 * Purpose:     This function takes in an integer size between 1-25 
 *              and a type (l, r or c), and prints out a triangle 
 *              according to these perameters.
 *              
 * Arguments:   Takes an integer argument and a char argument.
 * Output:      A triangle of the indicated dimensions..
 * Modifies:    stdin
 *              
 * Returns:     0 without errors and a 1 with errors.
 * Assumptions: None.
 * Bugs:        None.
 * Notes:       None.
 * 
 */

int printWedge(int size, char type)
{
    if (type != 'l' && type != 'r' && type != 'c')
    {        
        return 1;
    }
    else if (size < 1 || size > 25)
    {
        return 1; 
    }

    if (type == 'l')
    {        
        for(int i = 1; i <= size; ++i)
        {
            for(int j = i; j <= size; ++j)
            {
                printf("%3d",j);
            }
        printf("\n");
        }
    }

    if (type == 'r')
    {
        for(int i = 1; i <= size; ++i)
        {            
            for(int j = 1; j <= size; ++j)
            {                
                if (j < i)
                {
                    printf("   ");
                }
                else
                {
                    printf("%3d", j);
                }
            }        
        printf("\n");
        }
    printf("\n");
    }

    if (type == 'c')
    {
        for(int i = 1; i <= size; ++i)
        {            
            for(int j = 1; j <= size; ++j)
            {                
                if (j < i)
                {
                    printf(" ");
                }
                else
                {
                    printf("%3d", j);
                }
            }        
        printf("\n");
        }
    printf("\n");
    }

    return 0;
}

int 
main()
{
    int size, scan_success;
    char type;

    printf("What size and type of wedge do you want? ");
    scan_success = scanf("%d %c", &size, &type);

    if (scan_success != 2)
    {
        fprintf(stderr, "Invalid input. "
                        "Need to enter an integer size, "
                        "and type 'l', 'r' or 'c'.\n");
        return EXIT_FAILURE;
    }

    if (printWedge(size, type) != 0)
    {
        fprintf(stderr, "Invalid input. "
                        "Need to enter an integer size (1-25), "
                        "and type 'l', 'r' or 'c'.\n");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
