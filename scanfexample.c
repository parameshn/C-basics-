#include <stdio.h>

/* This is a sample program that asks users for some basic data and prints it on
screen in order to show what was entered */
int main()
{
    char topping[24];
    int slices;
    int month, day, year;
    float cost;
    // The first scanf will look for a floating-point variable, the cost
    // of a pizza
    // If the user doesn't enter a $ before the cost, it could cause
    // problems

    printf("how much does a pizza cost in your city?");
    printf("(enter as $XX.XX)\n");
    scanf(" $%f", &cost);

    printf("the cost of pizza is %.2f", cost);
    // The pizza topping is a string, so your scanf doesn't need an &

    printf("What is your favourite one word pizz topping?\n");
    scanf("%s", topping);

    printf("how many slices of %s pizza", topping);
    printf("can you eat in one sitting?\n");
    scanf("%d", &slices);

    printf("Wht is the today\'s date (enter it in XX/XX/XXXX FORMAT).\n");
    scanf(" %d/%d/%d", &month, &day, &year);

    printf("\n\nWhy not treat yourself to dinner on %d/%d/%d", month, day, year);
    printf("\nand have %d slices of %s pizza!\n", slices, topping);
    printf("It will only cost you $%.2f!\n\n\n", cost);

    return 0;
}
