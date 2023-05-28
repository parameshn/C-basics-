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
    float dot;

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

    ////program to list three kids and their school supply needs, as well as cost to buy the suply //

    // setting up the variables
    char firstInitial, middelInitial;
    int number_of_pencils;
    int number_of_notebooks;
    float pencils = 0.23;
    float notebooks = 2.89;
    float lunchbox = 4.99;

    // information about first child
    firstInitial = 'j';
    middelInitial = 'r';

    number_of_notebooks = 4;
    number_of_pencils = 7;

    printf("%c %c needs %d pencils, %d notebooks and 1 luchbox\n", firstInitial, middelInitial, number_of_pencils, number_of_notebooks);
    printf("the totoal cost is $%.2f\n\n", number_of_pencils * pencils + number_of_notebooks * notebooks + lunchbox);
    // the information for the second child
    firstInitial = 'A';
    middelInitial = 'j';

    number_of_notebooks = 10;
    number_of_pencils = 3;

    printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n",
           firstInitial, middelInitial, number_of_pencils,
           number_of_notebooks);
    printf("the total cost is $%.2f\n\n", number_of_pencils * pencils + number_of_notebooks * notebooks + lunchbox);
}