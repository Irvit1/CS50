#include <cs50.h>
#include <stdio.h>
#include<math.h>

int main(void)
{

    do
    {
        float dollars = get_float("Change Owed: ");
    }
    while (dollars < 0);

    int count = 0 ;

    int cents = round(dollars * 100);

    while (cents > 0)
    {
        if (cents >= 25)
        {
            count++;
            cents -= 25;
        }
        else if (cents >= 10 && cents < 25)
        {
            count++;
            cents -= 10;
        }
        else if (cents >= 5 && cents < 10)
        {
            count++;
            cents -= 5;
        }
        else
        {
            count++;
            cents -= 1;
        }

    }

    printf("%i", count);

}
