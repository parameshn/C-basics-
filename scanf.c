/*The scanf() function gets data from the keyboard

scanf() is a built-in C function that comes with all C compilers

//////////////////////////////////////////////////////////////////////////////////////////////
 Here is the format of scanf():
      scanf(controlString [, data]);
//////////////////////////////////////////////////////////////////////////////////////////////

Even though scanf() uses the same conversion characters as printf(), never specify escape
sequences such as \n, \a, or \t. Escape sequences confuse scanf().


/////////////////////////////////////////////////////////////////////////////////////////////////////
Almost every scanf() you write should be preceded with printf(). If you don’t start with a
printf(), the program stops and waits for input, and the user has no idea what to do
////////////////////////////////////////////////////////////////////////////////////////////////////
*/

/*if you need to get an amount from the user, you would put a printf() function like this before
scanf():
*/
// printf("What is the amount? "); /* Prompt */ /* A scanf() would follow */

/*Generally, the
printf() requests the data from the user, and the scanf() gets the data that the user types.
*/

/* This is a sample program that asks users for some basic data and
prints it on screen in order to show what was entered */

#include <stdio.h>
main()
{
    // Set up the variables that scanf will fill
    char firstInitial;
    char lastInitial;
    int age;
    int favourite_number;

    printf("What letter does your first name ends with?\n");
    scanf(" %c", &firstInitial);

    printf("what letter does your last name ends with\n");
    scanf(" %c", &lastInitial);
    /*Use a space before %c to consume leading whitespace characters, including the newline character, when reading a single character.
For other format specifiers (%d, %f, %s, etc.), the space before them is not needed as they already skip leading whitespace characters.*/

    printf("how old are you\n");
    scanf("%d", &age);

    printf("\nyour favourtie number is (interger only)?\n");
    scanf("%d", &favourite_number);

    printf("\nyour intials are %c.%c. and your %d years old", firstInitial, lastInitial, age);

    printf("\nyour favourite number is %d.\n\n", favourite_number);

    return 0;
}
/*ampersand = &

The bottom-line rule is this: If you’re asking the user to type integers, floating points, characters,
doubles, or any of the other single-variable combinations (long integers and so on), put an ampersand
before the variable names in the scanf(). If you are asking the user for a string to input into a
character array, don’t put the ampersand before the array name.
*/
