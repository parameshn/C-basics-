#include <stdio.h>
void main()
{
    /*C has several different kinds of variables because there are several different kinds of data. Not just any variable will hold just any piece of data. Only integer variables can hold integer data, only floating-point variables can hold floating-point data, and so on.*/

    /* types of variables
    char   = hold charater data such as 'x' and '^'
    int    = hold integer data such as 1,-35,1085
    float  = hold folating data such as 0.222,-145.33,2536
    double = hold extermely large or extremely small floaing point values
    */

    /////varibles must start with alphabets or undersocre

    /*C lets you begin a variable name with an underscore, but you shouldn’t do so. Some of C built-in variables begin with an underscore, so there’s a chance you’ll overlap one of those if you name your variables starting with underscores*/

    // some variables
    char bay;
    int meta;
    float dot

        // two character variables
        char bay_ray;
    int meta_spot;
    float dot_not;

    /////storing data in variables

    bay = 'h';
    meta = 123;
    dot = 1.236;

    meta_spot = 8.50 * .65;    // gets price after 35% discount
    dot_not = meta_spot * dot; // uses values from other variables
}