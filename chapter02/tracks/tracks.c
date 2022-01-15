#include <stdio.h>
#include <string.h>

char *tracks[] = {
        "What Have I Done to Deserve This",
        "Kiss Them For Me",
        "Blister in the Sun",
        "Don't You Want Me",
        "I Know What Boys Like",
        "We'll Be Together",
        "I Melt With You",
        "Ну Что Же! 💢",
};

void find_track(char *str)
{
        int i;
        for (i = 0; i < 5; i++) {
                if (strstr(tracks[i], str)) {
                        printf("Found track %i: %s\n",i+1,tracks[i]);
                }
        }
}


int main()
{
        char search_for[80];
        printf("Search term: ");
        //fgets(search_for,80,stdin); // WRONG! leaves \n on the end
        scanf("%79s", search_for);    // right, but annoying
        find_track(search_for);
        return 0;
}
