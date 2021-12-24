#include <stdio.h>
#include <string.h>

void decayed(char *s)
{
        printf("after decay:    %li\n",sizeof(s));
}

void decayed2(char s[])
{
        // remember this is a *copy* not the actual value
        printf("after decay2:    %li\n",sizeof(s));
}

void decayed3(char s[], char ss[21])
{
        // remember this is a *copy* not the actual value
        printf("after decay3:    %li\n",sizeof(s));
        printf("after decay3:    %li\n",sizeof(ss));
}


int main()
{
        char s[] = "Something long here.";
        char *t = s;
        printf("sizeof array:   %li\n",sizeof(s));
        decayed(s);
        decayed2(s);
        decayed3("Something long here.","Something long here.");
        printf("sizeof pointer: %li\n",sizeof(t));

        // WARNING: strlen is more relable, but just don't loop using
        // strlen since it loops itself to get length
        
        printf("strlen array:   %li\n",strlen(s));
        printf("strlen pointer: %li\n",strlen(t));

        return 0;
}
