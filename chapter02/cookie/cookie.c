#include <stdio.h>
#include <string.h>

char truth[] = "Cookies make you fat.";

//void cookie(char message[]) // the following is EXACTLY the same
void cookie(char *message)
{
        printf("%s\n",message);
        // WRONG! printf("Message is %i bytes long?\n",sizeof(message));
        // Following does NOT count the \0 null terminator (man strlen)
        printf("Message is %lu bytes long?\n",strlen(message));
}

int main()
{
        cookie(truth);
        return 0;
}

