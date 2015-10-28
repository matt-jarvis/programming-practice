/*
 * Write three functions that compute the sum of the numbers in 
 * a given list using a for-loop, a while-loop, and recursion.
 * 
 * Numbers: 3, 88, 22, 49, 65, 10, 1, 34, 101 and 77.
 * Answer:	450
 */
import java.util.Arrays;


public class ProblemOne
{
	
	private static int CalcFor(int[] nums)
	{
		int sum = 0;
		
		for(int i = 0; i < nums.length; i++)
		{
			sum += nums[i];
		}
		
		return sum;
	}
	
	private static int CalcWhile(int[] nums)
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
	
	private static int CalcRecursion(int[] nums, int len)
	{		
		if (len == 0)
		{
			return nums[len];
		}
		else
		{
			return nums[len] + CalcRecursion(nums, len - 1);
		}
	}
	
	public static void main(String[] args)
	{
		int[] nums = { 3, 88, 22, 49, 65, 10, 1, 34, 101, 77 };
		int sum = 450;
		
		System.out.println("Numbers: " + Arrays.toString(nums));
		System.out.println("Actual answer: " + sum);
		System.out.println("Calculating...");
		System.out.println("For-loop answer: " + CalcFor(nums));
		System.out.println("While-loop answer: " + CalcWhile(nums));
		System.out.println("Recursion answer: " + CalcRecursion(nums, nums.length - 1));
	}
	
}
