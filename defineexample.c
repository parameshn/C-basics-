#include <stdio.h>
#include <string.h>
#include "Chapter7ex1.h"

void main()
{
    int age;
    char childName[14] = "thomas";

    printf("\n%s have %d kids.\n", FAMILY, KIDS);

    age = 11;
    printf("the oldest , %s,is %d.\n", childName, age);

    strcpy(childName, "Christoper");
    age = 6;
    printf("the middle boy, %s, is %d. \n", childName, age);

    age = 3;
    strcpy(childName, "benjamin");
    printf("the youngest boy name is %c, and his age is %d", childName, age);
}