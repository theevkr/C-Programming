#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int lower = 0;
    int upper = 10;
    int count = 0;
    int randomnum;
    int userinput;
    srand(time(0));
    randomnum = (rand() % (upper - lower + 1)) + lower;
    printf("Guess the number between %d and %d : ",lower,upper);
    scanf("%d", &userinput);
    while (1)
    {
        if (userinput > randomnum)
        {
            printf("Lower number please, try again : ");
            scanf("%d", &userinput);
            count++;
        }
        else if (userinput < randomnum)
        {
            printf("Higer number please, try again : ");
            scanf("%d", &userinput);
            count++;
        }
        else 
        {
            count++;
            printf("You guessed it in %d tries\n", count);
            break;
        }
    }

    return 0;
}