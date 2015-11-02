/* --------------------------------------------------------------------------
** Filename:    problemthree.c 
**
** Description:	Write a function that computes the list of the first 100 
**              Fibonacci numbers. By definition, the first two numbers in 
**              the Fibonacci sequence are 0 and 1, and each subsequent number 
**              is the sum of the previous two. 
**              As an example, here are the first 10 Fibonacci numbers: 
**              0, 1, 1, 2, 3, 5, 8, 13, 21, and 34.
** 
** Author:      Matthew Jarvis        
** Created:     2nd Nov, 2015
** --------------------------------------------------------------------------*/
#include <stdio.h>
 
 
/* 
 * Function: fibonacci
 * ---------------------------------------------------
 * Computes a list of Fibonacci numbers.
 * 
 * length: The amount of Fibonacci numbers to compute.
 * returns: The list of Fibonacci numbers.
 */
int *fibonacci(int length)
{	
	static int fib[] = { 0, 1 };
	
	// TODO: compute the Fibonacci numbers.
	
	// TODO: only return an array of length size.
	return fib;
}


int main()
{
	// Initialise and compute Fibonacci numbers
	int fiblen = 100;
	int *fib = fibonacci(fiblen);
	
	// Print Fibonnaci numbers
	for (int i = 0; i < fiblen; i++)
		printf("Fibonnaci %d: \t %d \n", i, *(fib + i));
}