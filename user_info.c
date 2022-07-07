#include "user_info.h"

//
// Prints out whether a last name is cool according to the first letter of the last name
//
void if_else()
{
    char lastName[20];
    printf("Enter your last name: ");
    scanf("%s",lastName);
    printf("Your last name is %s because it starts with %c", (lastName[0] == 'P') ? "cool" : "not cool",lastName[0]);

}


//
// Asks the user how many meatballs they had in the last 5 days
//
void meatBalls()
{
    int meat_balls[5];
    for (int i = 0 ; i < 5 ; i++)
    {
        printf("How many meatballs did you eat on day %d\n",i +1);
        scanf("%d",meat_balls[i]);
        printf("You ate %d meatballs on day %d\n", meat_balls[i],i);
    }
}

