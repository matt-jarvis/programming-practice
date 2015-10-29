/*
 * Write three functions that compute the sum of the numbers in 
 * a given list using a for-loop, a while-loop, and recursion.
 * 
 * Numbers:	3, 88, 22, 49, 65, 10, 1, 34, 101 and 77
 * Answer:	450
 * 
 * @author	Matthew Jarvis
 * @date	28th Oct, 2015	
 */
import java.util.Arrays;


public class ProblemOne
{

	/* 
	 * Calculates and returns the sum of the numbers stored 
	 * in an array using a for loop.
	 * 
	 * @param nums  The array of numbers to be summed
	 */
	private static int sumWithFor(int[] nums)
	{
		int sum = 0;
		
		for(int i = 0; i < nums.length; i++)
		{
			sum += nums[i];
		}
		
		return sum;
	}
	
	
	/* 
	 * Calculates and returns the sum of the numbers stored 
	 * in an array using a while loop.
	 * 
	 * @param nums  The array of numbers to be summed
	 */
	private static int sumWithWhile(int[] nums)
	{
		int sum = 0;
		int i = 0;
		
		while(i < nums.length)
		{
			sum += nums[i];
			i++;
		}
		
		return sum;
	}
	
	
	/* 
	 * Calculates and returns the sum of the numbers stored 
	 * in an array using recursion.
	 * 
	 * @param nums  The array of numbers to be summed
	 * @param i  The index to begin summing from
	 */
	private static int sumWithRecursion(int[] nums, int i)
	{		
		if (i == nums.length)  
			// Index out of bounds, cease recursion 
			return 0;
		else  
			// Add the number returned by the recursive call to 
			// the number at the current index.
			return nums[i] + sumWithRecursion(nums, i + 1);
	}
	
	
	public static void main(String[] args)
	{
		// The numbers to sum
		int[] nums = { 3, 88, 22, 49, 65, 10, 1, 34, 101, 77 };
		// The actual sum of the numbers
		int sum = 450;
		
		// Main program
		System.out.println("Numbers: " + Arrays.toString(nums));
		System.out.println("Actual answer: " + sum);
		System.out.println("Calculating...");
		System.out.println("For-loop answer: " + sumWithFor(nums));
		System.out.println("While-loop answer: " + sumWithWhile(nums));
		System.out.println("Recursion answer: " + sumWithRecursion(nums, 0));
	}
	
}


