Practical07 consists of two pieces of code

1. dynamicAllocation.c

To run this code use:
> gcc -o dynam dynamicAllocation.c 

> ./dynam

On compiling, it will prompt the user to enter the size of the array,
following which it will give an output array of mentioned size, and it will fill it with ones.
It shows the dynamic allocation of the array based on user input


2.taylor.c

To run this code use:
> gcc -o taylor taylor.c -lm

> ./taylor

On compiling, it will prompt user to enter the level of precision or order of polynomial of taylors series to use
after that it will print an output of the value of sum of taylors series for x = 1. therefore calculates the value of e.

It also prints the difference between the real value of e and the one calculated using taylors series
