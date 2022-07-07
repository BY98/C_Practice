#include "Scrap.h"
//
// Calculates a number and the variable 'a' post-increments
//
void increment()
{

    int a = 5, b = 10,answer = 0 ;
    answer  = a++ *b ;
    printf("answer is : %d \n" , answer);
    printf("\n a is : %d \n" , a);
}
