#include <stdio.h>

int main()
{

        // ALWAYS USE A CHARACTER ARRAY IF YOU PLAN ON CHANGING ANY OF
        // THE INDIVIDUAL ARRAY VALUES EVEN THOUGH USING A STRING
        // LITERAL INSTEAD WILL FALSELY APPEAR TO ALLOW THE SAME THING.

        // https://wiki.sei.cmu.edu/confluence/display/c/STR30-C.+Do+not+attempt+to+modify+string+literals

        //const char *cards = "JQKA"; // NOT THE SAME THING AT ALL
        //char cards[] = "JQKA"; // PROHIBITED BY CERT C RULE STR30-C 

        char cards[] = {'J','Q','K','\0'};

        // double const means 1) can't change the content pointed to
        //                    2) can't change what the pointer points to
        //const char * const cards = "JQK";

        //printf("%c\n",cards[1]);
        //printf("%s %li\n",cards,sizeof(cards));
        cards[2] = 'P';
        printf("%s\n",cards);


        return 0;
}
