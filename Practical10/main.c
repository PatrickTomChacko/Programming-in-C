#include <stdio.h>
#include <stdlib.h>


int main()
{
    int h = 6;

    printf("Solution for %d discs\n",h);

    hanoi(h,1,3,2);
    return 0;
}
