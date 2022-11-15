#include <stdio.h>
#include <stdlib.h>


void hanoi (int n, int source, int destination, int inter)
{
    //base case
    if (n==1)
    {
        printf("Move disc from %d to %d\n", source, destination);
    }
    else
    {
        hanoi(n-1,source,inter,destination);
        printf("Move disc from %d to %d\n",source, destination);
        hanoi(n-1,inter,destination,source);
    }

}
