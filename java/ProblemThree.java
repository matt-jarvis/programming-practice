/*
 * Write a function that computes the list of the first 100 
 * Fibonacci numbers. By definition, the first two numbers in 
 * the Fibonacci sequence are 0 and 1, and each subsequent number 
 * is the sum of the previous two. 
 *
 * As an example, here are the first 10 Fibonacci numbers: 
 *        0, 1, 1, 2, 3, 5, 8, 13, 21, and 34.
 * 
 * Author:  Matthew Jarvis
 * Created: 1st Nov, 2015	
 */
 
import java.util.Arrays;


public class ProblemThree
{

	/* 
	 * Computes a list of Fibonacci numbers.
	 * 
	 * @param length  The amount of Fibonacci numbers to compute.
	 * @return  The list of Fibonacci numbers.
	 */
	private static int[] fibonacci(int length)
	{
		int[] fib = { 0, 1 };
		
		// TODO: Compute the Fibonacci numbers.
		
		return Arrays.copyOfRange(fib, 0, length);
	}
	

	public static void main(String[] args)
	{
		// Compute the Fibonacci numbers.
		int[] fib = fibonacci(100);

		// Print the Fibonacci numbers.
		int i = 0;
		while (i != fib.length)
		{
			System.out.println("Fibonacci " + i + ":\t" + fib[i]);
			i++;
		}

	}
	
}