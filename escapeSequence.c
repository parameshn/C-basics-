#include <stdio.h>

int main(void)
{
    /*
\n:  newline character (moves the cursor to the beginning of the next line).
\t:  horizontal tab character.
\b:  backspace character (moves the cursor one position backward).
\r:  carriage return character (moves the cursor to the beginning of the current line).
\v:  vertical tab character.
\a:  alarm(computers bill)
\0:  null character
\":  double quotation mark (").
\':  single quotation mark (').
\\:  backslash (\).
    */

    // An escape sequence isstored as a single character in C//

    printf("write code \n");
    printf("learn c"); // output write code
                       // learn c
    printf("write code");
    printf("\nlearn c"); // same output

    /*escape sequences are characters to C, you must enclose
    them in quotation marks so that C knows that the escape sequences are part of the string
    being printed */

    printf("write code\nlearn c"); // same output

    // using the popular escape sequences
    printf("Column A\tColumn B\tColumn C");
    printf("\nMy Computer\'s Beep Sounds Like This: \a!\n");
    printf("\"Let\'s fix that typo and then show the backslash ");
    printf("character \\\" she said\n");
    /* output Column A Column B Column C
My Computer's Beep Sounds Like This: !
"Let's fix that typo and then show the backslash character \" she
said */

    printf("%d roses cost %.2f per %d\n", 24, 19.99, 12);
    // output 24 roses cost 19.99 per 12

    printf("%s %d %f %c\n", "man", 12, 1.23, 'a');
    // output man 12 1.23 a

    /*The string Sam needs quotation marks, as do all strings, and the character X needs
single quotation marks, as do all characters.*/

    /////////////////////
    /*C is strangely specific when it comes to floating-point numbers. Even though the -
8.76 has only two decimal places, C insists on printing six decimal places. */

    /*You can control how C prints floating-point values by placing a period (.) and a number between the
    % and the f of the floating-point conversion character*/

    printf("%f %.1f %.2f %.3f %.4f %.5f %.9f\n\n", 1.123456789, 1.123456, 1.123456, 1.123456, 1.123456, 1.123456, 1.123456789);
    // output 1.123457 1.1 1.12 1.123 1.1235 1.12346 1.123456789

    printf("Quantity\tCost\tTotal\n");
    printf("%d\t\t$%.2f\t$%.2f\n", 3, 9.99, 29.97);
    printf("Too many spaces \b\b\b\b can be fixed with the ");
    printf("\\%c Escape character\n", 'b');
    printf("\n\a\n\a\n\a\n\aSkip a few lines, and beep ");
    printf("a few beeps.\n\n\n");
    printf("%s %c.", "You are kicking butt learning", 'C');
    printf("You just finished chapter %d.\nYou have finished ", 4);
    printf("%.1f%c of the book.\n", 12.500, '%');
    printf("\n\nOne third equals %.2f or ", 0.333333);
    printf("%.3f or %.4f or ", 0.333333, 0.333333);
    printf("%.5f or %.6f\n\n\n", 0.333333, 0.3333333);
}
