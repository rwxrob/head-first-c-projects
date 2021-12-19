#include <stdio.h>
#include <stdlib.h>

int main()
{
        char card_name[3];
        int count = 0;
        int done = 0;
        while (!done) {
                int val = 0;
                puts("Enter the card name: ");
                scanf("%2s", card_name);
                switch(card_name[0]) {
                case 'K':
                case 'Q':
                case 'J':
                        val = 10;
                        break;
                case 'A':
                        val = 11;
                        break;
                case 'X':
                        done++;
                        puts("Goodbye.");
                        continue;
                default:
                        val = atoi(card_name);
                        if (val < 1 || 10 < val) {
                                puts("Numbers must be 1-10.");
                                continue;
                        }
                }
                if (2 < val && val < 7) {
                        count++;
                } else if (val == 10) {
                        count--;
                }
                printf("Current count: %i\n", count);
        }
        return 0;
}
