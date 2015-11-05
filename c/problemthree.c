/* --------------------------------------------------------------------------
** Filename:    problemthree.c 
**
** Description:	Write a function that computes the list of the first 100 
**              Fibonacci numbers. By definition, the first two numbers in 
**              the Fibonacci sequence are 0 and 1, and each subsequent number 
**              is the sum of the previous two. 
**              
**              As an example, here are the first 10 Fibonacci numbers: 
**              0, 1, 1, 2, 3, 5, 8, 13, 21, and 34.
** 
** Author:      Matthew Jarvis        
** Created:     2nd Nov, 2015 
**
** TODO:        The program seems to function as expected, though I'm sure it 
**              it could be improved:
**                  • Refactor code to make it more readable and efficient
**                  • Check pointers are created, accessed and freed correctly
**              
** --------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>


// The base (10 for decimal, 8 for hex etc...)
#define BASE 10;

// Small number (value range: 0 to 255)
typedef unsigned char smallnum;

// Big number
typedef struct bignum
{
	smallnum *number;
	int length;
} bignum;


/* 
 * Function: addBigNums
 * ---------------------------------------------------
 * Adds 2 variables of type bignum together.
 *
 * a: the first bignum to be added (to b).
 * b: the second bignum to be added (to a).
 * returns: The sum of a and b, as a bignum.
 */
bignum addBigNums(bignum a, bignum b)
{
	// Determine the max length of the new bignum for malloc
	int size = 1;
	if (a.length >= b.length)
		size += a.length;
	else  // b's length must be greater than a's 
		size += b.length;
	
	// Initialise the new bignum and allocate memory
	bignum c;
	c.number = malloc(sizeof(smallnum) * size);
	c.length = size;
	
	// Iterate a and b, calculate the sum using addition with carrying
	smallnum smalla, smallb, smallc, carry;
	carry = 0;
	int i = 1;
	while (i <= size)
	{	
		/* 
		 * bignum a and b may differ in length, so set to smalla
		 * and smallb to 0 first, then change value if present.
		 */
		smalla = 0;
		smallb = 0;
		if (i <= a.length)
			smalla = a.number[a.length - i];
		if (i <= b.length)
			smallb = b.number[b.length - i];
		
		/* 
		 * Use the division and modulo operators to perform
		 * addition with carrying. The carried value will be
		 * added on the next iteration.
		 */
		smallc = smalla + smallb + carry;
		carry = smallc / BASE;
		c.number[size - i] = smallc % BASE;
		
		i++;
	}
	
	
	// At this point, c.number may have a leading 0, let's remove it
	if (c.number[0] == 0 && c.length > 1)
	{
		c.number++;
		c.length--;
	}
		
	return c;
}


/* 
 * Function: bigNumToString
 * ---------------------------------------------------
 * Converts a variable fo type bignum to a string.
 *
 * n: The bignum to be converted to a string.
 * returns: A string (char *) representation of the bignum.
 */
char *bigNumToString(bignum n)
{
	char *s = malloc(n.length * sizeof(char));
	
	for (int i = 0; i < n.length; i++)
		sprintf(&s[i], "%hhu", n.number[i]);

	return s;
}
 
 
/* 
 * Function: fibonacci
 * ---------------------------------------------------
 * Computes a list of Fibonacci numbers.
 * 
 * length: The amount of Fibonacci numbers to compute.
 * returns: The list of Fibonacci numbers.
 */
bignum *fibonacci(int length)
{	
	bignum *fib = malloc(sizeof(bignum) * length);
	int i = 0;
	
	// Add the first and second numbers to the array.
	while (i < length && i < 2)
	{
		bignum n;
		n.length = 1;
		n.number = malloc(sizeof(smallnum) * n.length);
		n.number[0] = i;
		fib[i] = n;
		i++;
	}
	
	// Now compute the Fibonacci numbers.
	while(i < length)
	{
		fib[i] = addBigNums(fib[i - 1], fib[i - 2]);
		i++;
	}
	
	return fib;
}


int main()
{
	// Initialise and compute Fibonacci numbers
	int fiblen = 100;
	bignum *fibseq = fibonacci(fiblen);
	
	// Print Fibonnaci numbers
	for (int i = 0; i < fiblen; i++)
		printf("Fibonnaci %d: \t %s \n", i, bigNumToString(fibseq[i]));
	
	free(fibseq);
}