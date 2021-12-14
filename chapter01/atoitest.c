#include <stdio.h>
#include <stdlib.h>

/* In general, do NOT use atoi. Use strtol instead. */

int main() {

        // official
        n = atoi("42");
        printf("%i\n",n);

        // works (sometimes) but unsupported
        n = atoi("  43     s  ");
        printf("%i\n",n);

        n = atoi("s  43     s  ");
        printf("%i\n",n);
        int n = atoi("Hello world!");
        printf("%i\n",n);
        n = atoi("Hello 1 world!");
        printf("%i\n",n);

        return 0;
}
