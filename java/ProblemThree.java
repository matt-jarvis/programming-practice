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
 
import java.util.ArrayList;
import java.util.List;

public class ProblemThree
{

	/* 
	 * Computes a list of Fibonacci numbers.
	 * 
	 * @param length  The amount of Fibonacci numbers to compute.
	 * @return  The list of Fibonacci numbers.
	 * 
	 * TODO: Type Integer cannot handle big numbers (where length > 46)
	 */
	private static List<Integer> fibonacci(int length)
	{
		List<Integer> fib = new ArrayList<Integer>();
		fib.add(0);
		fib.add(1);

		// Compute the Fibonacci numbers.
		while(fib.size() < length)
		{
			int i = fib.size();
			fib.add(fib.get(i - 1) + fib.get(i - 2));
		}
		
		return fib.subList(0, length);
	}
	

	public static void main(String[] args)
	{
		// Compute the Fibonacci numbers.
		List<Integer> fib = fibonacci(100);

		// Print the Fibonacci numbers.
		int i = 0;
		while (i < fib.size())
		{
			System.out.println("Fibonacci " + i + ":\t" + fib.get(i));
			i++;
		}

	}
	
}