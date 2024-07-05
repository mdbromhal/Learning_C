/*
Program to evaluate face values.
Exercise from Griffiths, D. F., & Griffiths, D. (2012). Head first C: A brain-friendly guide. O’Reilly. 
*/

#include <stdlib.h>
#include <stdio.h>

int main() {
    char card_name[3]; // Making an array to store what user enters, using char because C doesn't support strings without support
    puts("Enter the card_name: ");
    scanf("%2s", card_name); // Reads up to 2 characters from user's input; strings are null-terminated (end with '\0'), so need 2 to include 1st character
    int val = 0;
    if (card_name[0] == 'K') { /* card_name[0] = first character user types */
        val = 10; // Can also write comments like this because the gcc compiler works with all three standards:ANSI C, C99, and C11
    } else if (card_name[0] == 'Q') {
        val = 10;
    } else if (card_name[0] == 'J') {
        val = 10;
    } else if (card_name[0] == 'A') {
        val = 11;
    } else {
        val = atoi(card_name); /* atoi converts the text into a number */
    }

    // Check if the value is 3 to 6
    if ((val >= 3) && (val <= 6)) {
        puts("Count has gone up");
    }

    // Otherwise check if card was 10, J, Q, K
    else if (val == 10) { // Need only one condition for this
        puts("Count has gone down");
    }
    printf("The card value is: %i\n", val);
    return 0;
}