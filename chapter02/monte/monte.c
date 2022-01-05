#include <stdio.h>

int main()
{

        //char * cards = "JQK";              // WRONG: compiles, but BOOM
        //const char * const cards = "JQK";  // WRONG: won't compile
        //char cards[] = {'J','Q','K'};      // WRONG: puts() segfaults
        //char cards[] = {'J','Q','K','\0'}; // fine, verbose
        char cards[] = "JQK";                // fine, copies string lit
        char a_card = cards[2];
        cards[2] = cards[1];
        cards[1] = cards[0];
        cards[0] = cards[2];
        cards[2] = cards[1];
        cards[1] = a_card;
        puts(cards);
        return 0;
}
