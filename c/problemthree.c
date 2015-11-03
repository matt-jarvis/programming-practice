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
** TODO:        It seems the largest built-in data type in c is an unsigned 
**              long long, which still isn't large enough to represent all 
**              the Fibonacci numbers we require (the 93rd is the largest 
**              number that can represented by an unsigned long long. 
**              Perhaps try a library?
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