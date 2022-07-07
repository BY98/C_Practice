#include "helper_functions.h"

// Find element stored in the middle of an odd-sized array
int * findMid(int arr[], int size)
{
    printf("The size of the array is %d \n", size);
    int * mid_element = &arr[size/2];
    return mid_element;
}
