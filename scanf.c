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

#include <stdio.h>
void main()
{
    /*if you need to get an amount from the user, you would put a printf() function like this before
scanf():
*/
    printf("What is the amount? "); /* Prompt */ /* A scanf() would
follow */

    /*Generally, the
    printf() requests the data from the user, and the scanf() gets the data that the user types.
    */
}