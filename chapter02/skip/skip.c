#include <stdio.h>

void skip6(char *message)
{
        puts(message + 6);
        puts(&message[6]);
}

int main()
{
        char *message_from_me = "Don't call me";
        skip6(message_from_me);
        return 0;
}
