Practical05 consists of two pieces of code:

1. "Fibonacci.c"
This code can be run using:
> gcc -o fibo fibonacci.c

> ./fibo

after running the code, it will ask you to enter a number, say x
and it will print out the first x digits of the fibonacci sequence



2. "hyperbolic.c"

To run this code use:

> gcc -o hyper hyperbolic.c -lm

> ./hyper

the code will print the hyperbolic arc tangent using the Maclaurin series, and using natural logarithms
It will also print the difference between the two answers, significant to 10 figures.
