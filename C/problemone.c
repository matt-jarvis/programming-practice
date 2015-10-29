/* --------------------------------------------------------------------------
** Filename:		problemone.c 
**
** Description:	Write three functions that compute the sum of the numbers in 
** 				a given list using a for-loop, a while-loop, and recursion. 
** 
** Author:    	Matthew Jarvis        
** Start date:	29th Oct, 2015
** --------------------------------------------------------------------------*/
#include<stdio.h>
 
 
/* 
 * Function: sumWithFor
 * ---------------------------------------------------
 * Calculates the sum of the numbers stored 
 * in an array using a for-loop.
 * 
 * nums: The array of numbers to be summed.
 * len: The amount of numbers to sum (starting from 0).
 * 
 * returns: The sum of the the sum of the numbers in 
 * 			the array.
 */
int sumWithFor(int nums[], int len)
{
	int sum = 0;
	
	for (int i = 0; i < len; i++)
		sum += nums[i];
	
	return sum;
}

/* 
 * Function: sumWithFor
 * ----------------------------------------------------
 * Calculates the sum of the numbers stored 
 * in an array using a while-loop.
 * 
 * nums: The array of numbers to be summed.
 * len: The amount of numbers to sum (starting from 0).
 * 
 * returns: The sum of the the sum of the numbers in 
 * 			the array.
 */
int sumWithWhile(int nums[], int len)
{
	int sum = 0;
	int i = 0;
	
	while (i != len)
	{
		sum += nums[i];
		i++;
	}
	
	return sum;
}

/* 
 * Function: sumWithFor
 * ---------------------------------------------------
 * Calculates the sum of the numbers stored 
 * in an array using recursion.
 * 
 * nums: The array of numbers to be summed.
 * len: The amount of numbers to sum (starting from 0).
 * i: The index to begin summing from.
 * 
 * returns: The sum of the the sum of the numbers in 
 * 			the array.
 */
int sumWithRecursion(int nums[], int len, int i)
{
	// TODO
	return 0;
}

int main()
{
		// The numbers to sum
		int nums[] = { 3, 88, 22, 49, 65, 10, 1, 34, 101, 77 };
		// The actual sum of the numbers
		int sum = 450;
		
		/* Main program */
		
		// First, print the numbers to be summed and the actual answer
		printf("Numbers: (");
		int numsLen = sizeof(nums) / sizeof(nums[0]);
		int firstNumber = 1;
		for (int i = 0; i < numsLen; i++)
		{
			if (!firstNumber)
				printf(", ");

			printf("%d", nums[i]);
			firstNumber = 0;
		}
		printf(")\n");
		printf("Actual answer: %d\n", sum);
		
		// Now call each function to calculate the sum and print the results
		printf("Calculating...\n");
		printf("For-loop answer: %d\n", sumWithFor(nums, numsLen));
		printf("While-loop answer: %d\n", sumWithWhile(nums, numsLen));
		printf("Recursion answer: %d\n", sumWithRecursion(nums, numsLen, 0));
}