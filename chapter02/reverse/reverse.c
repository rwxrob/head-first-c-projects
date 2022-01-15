#include <stdio.h>
#include <string.h>

void print_reverse(char *str)  // I'm trusting str to be an actual string
{
        size_t len = strlen(str);
        printf("Length of string: %li\n",len);
        int i = len-1; // because size_t is smaller than int?
        while (i>=0) {
                printf("%c",str[i]);
                i--;
        }
        //printf("%s\n",str);
}

int main()
{
        char reverse_me[80];
        scanf("%79s",reverse_me);
        printf("Pointer to reverse_me: %p\n",reverse_me);
        print_reverse(reverse_me);
        return 0;
}
