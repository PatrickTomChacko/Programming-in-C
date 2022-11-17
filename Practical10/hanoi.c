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
        // applying the function recursively for (n-1) discs from source to inter
        hanoi(n-1,source,inter,destination);
        printf("Move disc from %d to %d\n",source, destination);
        // applying the function recursively for (n-1) discs from inter to destination
        hanoi(n-1,inter,destination,source);
    }

}
