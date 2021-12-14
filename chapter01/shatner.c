#include <stdio.h>

int main() {

        //char s[10] = {'s','h','a','t','n','e','r','\0'};
        // 01010011011010000110000101110100011011100110010101110010
        char s[10] = "shatner";
        s[0] = 'S';
        s[8] = 'Z';
        for (unsigned int i = 0; i < sizeof(s); i++)
                printf("%d: %c\n",i,s[i]);

        char * foo = "spock";
        // BAD: foo[0] = 'S';
        printf("%c",*(foo+2));
        return 0;
}
