#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3];
    puts("Enter the card name: ");
    scanf("%2s", card_name);
    int val = 0;
    switch(card_name[0]) {
    case 'K':
    case 'Q':
    case 'J':
        val = 10;
        break;
    case 'A':
        val = 11;
        break;
    default:
        // FIXME: replace with strtol
        val = atoi(card_name);
    }
    // fyi: rust does (3..6).contains(&val)
    if (3 < val && val < 6) 
        puts("Count has gone up.");
    else if (val == 10)
        puts("Count has gone down");
    return 0;
}
