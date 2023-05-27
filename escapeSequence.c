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
}
