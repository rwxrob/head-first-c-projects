#include <stdio.h>

int main()
{
        //char * raider = "Alive"; // WRONG
        char raider[] = {'A','l','i','v','e','\0'};
        // char raider[] = "Alive";
        char *jimmy = raider;
        printf("raider pointer: %p\njimmy pointer: %p\n",raider,jimmy);
        printf("Masked raider is %s. Jimmy is %s.\n",raider,jimmy);
        // raider = "DEAD!"; // WRONG
        raider[0] = 'D';
        raider[1] = 'E';
        raider[2] = 'A';
        raider[3] = 'D';
        raider[4] = '!';
        //raider[5] = '!';    // BOOM
        //raider[6] = '\0';   // BOOM
        printf("Masked raider is %s. Jimmy is %s.\n",raider,jimmy);
        return 0;
}
