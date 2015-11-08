/*
 * Write a function that given a list of non negative integers, 
 * arranges them such that they form the largest possible number. 
 * For example, given [50, 2, 1, 9], the largest formed number is 
 * 95021.
 * 
 * Author:  Matthew Jarvis
 * Created: 6th Nov, 2015	
 */
 
import java.util.Arrays;
import java.util.ArrayList;
import java.math.BigInteger;
import java.util.List;
import java.lang.Math;


public class ProblemFour
{

	/* 
	 * Takes a list of non negative integers and arranges them
	 * such that they form the largest possible number.
	 * 
	 * @param intList  The list of non negative integers.
	 * @return  The largest possible number that can be formed.
	 */
	private static BigInteger getLargestNumber(List<Integer> intList)
	{
		// Create a new list to store the sorted numbers
		List<Integer> newList = new ArrayList<Integer>();
		
		// Add the first number so we have something to compare to
		newList.add(intList.get(0));
		
		// Iterate intList (skip the first value, we added it above)
		for (Integer i : intList.subList(1, intList.size()))
		{
			// Determine where to put i in the newList
			for (Integer n : newList)
			{
				BigInteger a = combine(Arrays.asList(i, n));
				BigInteger b = combine(Arrays.asList(n, i));
				
				if (a.compareTo(b) > 0)
				{
					newList.add(newList.indexOf(n), i);
					break;
				}
				
				// If end of list is reached, add i to the end
				if (n == newList.get(newList.size() - 1))
				{
					newList.add(i);
					break;
				}
			}
		}
		
		// Convert the newList to a BigInteger before returning
		return combine(newList);
	}
	
	
	/*
	 * Combines a list of integers to form a BigInteger. The 
	 * absolute value is used for negative numbers.
	 * For example: The list [7, -34, 2, 910], would return
	 * a BigInteger with a value of 7342910.
	 *
	 * @param intList  The list of integers to combine.
	 * @return  The integers combined into a single value.
	 */
	private static BigInteger combine(List<Integer> intList)
	{
		// Combine the numbers into a string first
		String s = "";
		for (Integer i : intList)
			// abs() will convert any negative ints to positive
			s += Math.abs(i.intValue());
		
		// Create the BigInteger using its string value constructor
		return new BigInteger(s);
	}

    
	public static void main(String[] args)
	{
		// Initialise the list of non negative integers
		List<Integer> intList = Arrays.asList(50, 2, 1, 9);
		System.out.println("List of ints: " + intList.toString());
		
		// Compute the largest possible number
		BigInteger largestNumber = getLargestNumber(intList);
		System.out.println("Largest possible number: " + largestNumber);
	}
	
}