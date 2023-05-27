#include <stdio.h>
void main()
{
    /*
    char m;
    int s;
    printf("abc");
    scanf("%d%c", &s, &m);
    printf("the given number is %d\n", s);
    printf(" the character is %c\n", m);
    */

    /*In C programming, a control string (also known as a format string or format control string) is a string that contains both plain text and format specifiers. It is used with certain functions like printf() and scanf() to control the input and output formatting.*/

    printf("learning the %c program \n", 'c');
    printf("i've just completed the chapter %d\n", 2);
    printf("i'm %f sure ready to move on\n", 99.99);
    printf("to the next chapter!\n");

    // formatspecifier = place hloders//

    /*  %d for printing or scanning integers (decimal).
%f for printing or scanning floating-point numbers.
%s for printing or scanning strings.
%c for printing or scanning characters.
%p for printing pointers.
%x or %X for printing integers in hexadecimal format.
*/

    printf("my favroute number is %d\n", 7); // prints my favourite number
                                             // is 7
                                             // The format specifier %d indicates that an integer value will be inserted at that location.
                                             // The corresponding data is provided as an argument 7
                                             // output my favourite number is 7
    // to print string
    printf("write code");
    printf("learn c"); // output write codelearn c

    /*C does not automatically move the cursor down to the next line when a printf()
executes. You must insert an escape sequence in the controlString if you want C
to go to the next line after a printf().
*/
}
