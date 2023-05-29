/*These preprocessor directives are used most often:
• #include
• #define
It’s nothing more than a file merge command. Right before
your program is compiled, the #include statement is replaced with the contents of the filename
specified after #include.

//////////// #include inserts a disk file into the middle of another file.////////////////////////

 As a reminder, the
#include file for printf() is stdio.h (which stands for standard I/O), and the #include
file for the strcpy() function is string.h.

/////////////////////////////////////////////////////////////////////////////////////////////////////
The file you include is called a header file. That’s why most included files end in the extension .h.
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include has two formats, which are almost identical:
#include <filename>
and
#include "filename

When you write your own header files, use the second form of the preprocessor directive, the one that
has quotation marks. When you use quotation marks, C first searches the disk directory in which your
program is stored and then searches the built-in #include directory. Because of the search order,
you can write your own header files and give them the same name as those built into C, and yours will
be used instead of C’s.

It’s best to put your #include directives before main()
*/

/*The #define preprocessor directive defines constants.

Constants that you define with #define are not variables, even though they
sometimes look like variables when they are used.



#define AGELIMIT 21
#define MYNAME "Paula Holt"
#define PI 3.14159
 */
void main()
{
// Here are some sample #define directives:
#define AGELIMIT 21
#define MYNAME "Paula Holt"
#define PI 3.14159

#define CONSTANT constantDefinition
    // here’s what #define tells C: Every place in the program that the CONSTANT appears,
    // replace it with the constantDefinition.

    /*The first #define just shown instructs C to find
every occurrence of the word AGELIMIT and replace it with a 21. Therefore, if this statement
appeared somewhere in the program after the #define:*/
    int employeeAge = 5;
    if (employeeAge < AGELIMIT)
    {
    }

    /*the compiler acts as if you typed this:
if (employeeAge < 21)
even though you didn’t.
*/

    /*Use uppercase letters for the defined constant name. This is the one exception in C
when uppercase is not only used, but recommended.
*/
}