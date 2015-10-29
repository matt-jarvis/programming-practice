/*
 * Write a function that combines two lists by alternatingly taking elements. 
 * For example: given the two lists [a, b, c] and [1, 2, 3], the function 
 * should return [a, 1, b, 2, c, 3].
 * 
 * Author:  Matthew Jarvis
 * Created: 29th Oct, 2015	
 */
import java.util.Arrays;
import java.util.List;


public class ProblemTwo
{

	/* 
	 * Merges two lists into one (in a zip-like manner).
	 * 
	 * @param a  The first list to merge (with b)
	 * @param b  The second list to merge (with a)
	 * @return c  The merged list (a and b combined)
	 */
	private static List<Object> mergeLists(List<Object> a, List<Object> b)
	{
		// TODO
		List<Object> c = null;
		return c;
	}
	

	public static void main(String[] args)
	{
		// The lists to merge
		List<Object> lista = Arrays.asList('a', 'b', 'c');
		List<Object> listb = Arrays.asList(1, 2, 3);

		// Main program
		System.out.println("List a: " + lista.toString());
		System.out.println("List b: " + listb.toString());
		System.out.println("Merged: " + mergeLists(lista, listb));
	}
	
}