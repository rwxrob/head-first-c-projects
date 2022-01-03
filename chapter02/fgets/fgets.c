#include <stdio.h>

#ifndef MAXNAME
#define MAXNAME 20
#endif


void prompt_name(char name[])
{
        printf("Enter name: ");
        // fgets(name,sizeof(name),stdin); / THIS IS A FAIL
        fgets(name,MAXNAME,stdin);
}

int main()
{
        char name[MAXNAME];
        prompt_name(name);
        printf("%s",name);
        return 0;
}
