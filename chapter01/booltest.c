#include <stdio.h>
#include <stdbool.h>

int main() {
        bool foo = false;
        printf("%i\n",foo);
        if (foo) puts("foo is true");
        else puts("foo is false");
        int bar = -1;
        printf("%i\n",bar);
        if (bar) puts("bar is true");
        else puts("bar is false");
        return 0;
}
