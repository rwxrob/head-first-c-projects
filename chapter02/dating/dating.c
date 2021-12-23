#include <stdio.h>

int main()
{
        int playa[] = {1,2,3};
        printf("The 'playa' contains %p\n",playa);
        printf("playa[0] is %i\n",playa[0]);
        int *choice = playa;
        printf("The 'choice' contains %p\n",choice);
        playa[0] = 2;
        playa[1] = playa[2];
        playa[2] = *choice;
        printf("The winner is %i\n",playa[2]);
        return 0;
}
