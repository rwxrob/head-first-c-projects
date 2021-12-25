#include <stdio.h>

// WRONG! This whole file is broken on purpose.
// (The right way is in the book. I just wanted
// more practice with pointer decay errors.)

void enter_food(char food[])
//void enter_food(char *food)
{
        printf("Enter your favorite food: ");
        printf("%lu\n",sizeof(food));
        // WRONG sizeof is size of *pointer* not array
        fgets(food,sizeof(food),stdin);
}

int main()
{
        char food[5];
        printf("%lu\n",sizeof(food));
        enter_food(food);
        printf("%lu\n",sizeof(food));
        printf("You entered: %s\n",food);
        return 0;
}
