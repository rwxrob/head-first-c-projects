#include <stdio.h>
#include <string.h>
#define LEN(a) (sizeof((a)) / sizeof((a)[0]))

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

/*
// returns the location of substring or -1 if not found
// WARNING: assumes all strings are properly terminated with '\0'
long signed int contains(char *track, char *str)
{
        long unsigned int i;
        int matching = 0;
        int str_i = 0;
        for(i=0;i<MAXTRACK && track[i];i++) {
        }
        return -1;
}
*/

int main(void)
{
        char q[80];
        printf("Search? ");
        scanf("%79s",q);
        printf("You entered: %s\n",q);
        long unsigned int i;
        for (i=0; i<LEN(tracks) ;i++) {
                //printf("Checking %s\n",tracks[i]);
                if (strstr(tracks[i],q)) {
                        printf("%s has %s\n",tracks[i],q);
                }
        }
        return 0;
}
