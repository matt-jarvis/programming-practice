"""
Write a function that combines two lists by alternatingly taking elements. 
For example: given the two lists [a, b, c] and [1, 2, 3], the function 
should return [a, 1, b, 2, c, 3].

@author Matthew Jarvis
@created 29th Oct, 2015	
"""

def merge_lists(a, b):
	""" 
	Merges two lists into one (in a zip-like manner).
	 	
	:param a: The first list to merge (with b).
	:param b: The second list to merge (with a).
	:rtype: list
	"""
	# TODO
	c = []
	return c
	

def run():
	# the lists to merge.
	lista = ['a', 'b', 'c']
	listb = [1, 2, 3, 4, 5, 6]

	# main program.
	print "List a:", lista
	print "List b: ", listb
	print "Merged: ", merge_lists(lista, listb)


if __name__ == "__main__":
	run()