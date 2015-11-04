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
**
** TODO:        In response to the last TODO - I have found a few libraries
**              capable of dealing with big numbers (GNU GMP). However, I have
**              decided it would be good practice to solve this problem without
**              help from external/3rd party libraries. Initial ideas are
**              listed below:
**                  • Treat numbers as a list of smaller numbers (ranging 0-9)
**                  • To add 2 numbers: iterate each list summing and carrying
**                  • Numbers will be converted to a char * for printing   
**              
** --------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long LLU;
 
/* 
 * Function: fibonacci
 * ---------------------------------------------------
 * Computes a list of Fibonacci numbers.
 * 
 * length: The amount of Fibonacci numbers to compute.
 * returns: The list of Fibonacci numbers.
 */
LLU *fibonacci(int length)
{	
	LLU *fib = malloc(length * sizeof(LLU));
	int i = 0;
	
	// Add the first element to the array.
	if (length > i)
	{
		fib[i] = 0;
		i++;
	}
	
	// Add the second element to the array.
	if (length > i)
	{
		fib[i] = 1;
		i++;
	}
	
	// Now compute the Fibonacci numbers.
	while(i < length)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		i++;
	}
		
	return fib;
}


int main()
{
	// Initialise and compute Fibonacci numbers
	int fiblen = 100;
	LLU *fib = fibonacci(fiblen);
	
	// Print Fibonnaci numbers
	for (int i = 0; i < fiblen; i++)
		printf("Fibonnaci %d: \t %llu \n", i, *(fib + i));
}