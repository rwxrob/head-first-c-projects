#include <stdio.h>

int main() {
    // assume name shorter than 20 characters
    char ex[20];
    puts("Enter ex's name:");
    scanf("%19s", ex);
    printf("Adios, %s.\n\nNice knowing you.\n", ex);
}
