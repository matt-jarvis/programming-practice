/*
 * Write a function that combines two lists by alternatingly taking elements. 
 * For example: given the two lists [a, b, c] and [1, 2, 3], the function 
 * should return [a, 1, b, 2, c, 3].
 * 
 * Author:  Matthew Jarvis
 * Created: 29th Oct, 2015	
 */
import java.util.Arrays;


public class ProblemTwo
{

	/* 
	 * Merges two lists into one (in a zip-like manner).
	 * 
	 * @param a  The first list to merge (with b)
	 * @param b  The second list to merge (with a)
	 * @return c  The merged list (a and b combined)
	 */
	private static char[] mergeLists(char[] a, char[] b)
	{
		// TODO
		char[] c = null;
		return c;
	}
	

	public static void main(String[] args)
	{
		// The lists to merge
		char[] lista = { 'a', 'b', 'c' };
		char[] listb = { '1', '2', '3' };

		// Main program
		System.out.println("List a: " + Arrays.toString(lista));
		System.out.println("List b: " + Arrays.toString(listb));
		System.out.println("Merged: " + mergeLists(lista, listb));
	}
	
}