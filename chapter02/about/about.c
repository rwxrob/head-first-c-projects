#include <stdio.h>

void read_initials_age()
{
        char first;
        char last;
        int age;
        printf("First and Last Initials and Age: ");
        scanf("%c %c %i",&first,&last,&age);
        printf("Nice to meet you, %c %c.\n",first,last);
        printf("Wow, you're %i years old.\n",age);
}

void read_name_age()
{
        char first[31];
        char last[31];
        int age;
        printf("First and Last Name and Age: ");
        scanf("%30s %30s %i",first,last,&age);
        printf("Nice to meet you, %s %s.\n",first,last);
        printf("Wow, you're %i years old.\n",age);
}

void bork()
{
        char first[4];
        char last[4];
        int age;
        printf("First and Last Name and Age: ");
        // WRONG! %s has no limit, will seg fault
        scanf("%s %s %i",first,last,&age);
        printf("Nice to meet you, %s %s.\n",first,last);
        printf("Wow, you're %i years old.\n",age);
}


int main()
{
//        read_initials_age();
//        read_name_age();
        bork();
        return 0;
}
