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
		BigInteger largest = BigInteger.valueOf(0);
		
		//TODO: Compute the largest possible number
		
		return largest;
	}
	

	public static void main(String[] args)
	{
		// Initialise the list of non negative integers
		List<Integer> intList = Arrays.asList(50, 2, 1, 9);
		
		// Compute the largest possible number
		BigInteger largestNumber = getLargestNumber(intList);
		
		// Print the results
		System.out.println("List of ints: " + intList.toString());
		System.out.println("Largest possible number: " + largestNumber);
	}
	
}