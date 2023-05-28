#include <stdio.h>
#include <string.h>
void main()
{
    char Month[10] = "january"; // defining array
    ;                           // assigning a string

    ////////////// A string always ends with a null zero [\0] in memory. ///////////////////

    /*Each element in a character array is a character. The combination of characters—the array or list of characters—holds the entire string*/

    /*If you wanted to, you could change the contents of the array from January to March one element at a time, like this:*/

    Month[0] = 'M';
    Month[1] = 'a';
    Month[2] = 'r';
    Month[3] = 'c';
    Month[4] = 'h';
    Month[5] = '\0'; // You must add this

    char month1[8] = "January";
    char month2[] = "January"; // both do the sAME

    printf("The month is %s", Month); // PRINTING strings in array

    char month5[25] = "January"; /* Leaves room for longer strings */

    /*You can assign a string to a month with the equals sign only at the time you define the string. If later in the program you want to put a new string into the array, you must either assign it one character at a time or use C’s strcpy() (string copy) f*/

    strcpy(Month, "April"); /* Puts new string in month array */

    ////////In your programs that use strcpy(), you must put this line after the #include <stdioh>:  #include <string.h>///////////////////////////////////////////
    // This program pairs three kids with their favorite superhero//

    char Kid1[12]; // Kid1 can hold an 11-character name

    // Kid2 will be 7 characters (Maddie plus null 0)
    char Kid2[] = "Maddies";

    /// Kide3 is also 7 charaters, but specifically defined
    char Kid3[7] = "Andrew";

    // hero1 will be 7 characters (adding null 0 )
    char hero1[] = "Batman";

    char hero2[34] = "spderman"; // Hero2 will have extra room just in case

    char hero3[25];

    Kid1[0] = 'k'; // Kid1 is being defined character-by-character
    Kid1[1] = 'a'; // Not efficient, but it does work
    Kid1[2] = 't';
    Kid1[3] = 'i';
    Kid1[4] = 'e';
    Kid1[5] = '\0'; // Never forget the null 0 so C knows when the string ends

    strcpy(hero3, "the batman");

    printf("%s\'s favourite hero is %s.\n", Kid1, hero1);
    printf("%s\'s favourite hero is %s.\n", Kid2, hero2);
    printf("%s\'s favourite hero is %s.\n", Kid3, hero3);
}