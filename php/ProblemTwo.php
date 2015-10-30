<?php
/**
 * Write a function that combines two lists by alternatingly 
 * taking elements. For example: given the two lists [a, b, c] 
 * and [1, 2, 3], the function should return [a, 1, b, 2, c, 3].
 *
 * @author	Matthew Jarvis
 * @created	30th Oct, 2015	
 */


/* 
 * Merges two lists into one (in a zip-like manner).
 *
 * @param a: The first list to merge (with b).
 * @param b: The second list to merge (with a).
 * @return: The newly merged list (a and b combined).
 */
function merge_lists($a, $b)
{
	$c = array();	
	return $c;
}


/* 
 * Prints a list with each element separated by a 
 * comma. e.g (a, b, c, ..., ...)
 * 
 * list: The list to print.
 */
function print_list($list)
{
	echo "(";
	$first_iteration = true;
	foreach ($list as $element)
	{
		if (!$first_iteration)
			echo ", ";  // Separator
		echo $element;
		$first_iteration = false;
	}
	echo ")";
}


/* Main Program */
// The lists to merge
$lista = array('a', 'b', 'c');
$listb = array(1, 2, 3, 4, 5, 6);

// Print and merge lists. 
echo "List a: "; print_list($lista); echo "<br>";
echo "List b: "; print_list($listb); echo "<br>";
echo "Merged: "; print_list(merge_lists($lista, $listb)); echo "<br>";

?>