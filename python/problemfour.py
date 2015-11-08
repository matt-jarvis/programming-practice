"""
Write a function that given a list of non negative integers, 
arranges them such that they form the largest possible number. 
For example, given [50, 2, 1, 9], the largest formed number is 
95021.

@author Matthew Jarvis
@created 8th Nov, 2015	
"""

def get_largest_number(numbers):
	""" 
	Takes a list of non negative integers and arranges them
	such that they form the largest possible number.
	 	
	:param numbers: The list of non negative integers.
	:rtype: integer
	"""
	if not numbers:
		raise ValueError("List is empty")
	
	# TODO: compute the largest possible number.
	
	return 0


def run():
	# initialise the list of non negative integers.
	int_list = [50, 2, 1, 9];
	print "List of ints:", int_list
		
	# compute the largest possible number.
	largest_number = get_largest_number(int_list)
	print "Largest possible number:", largest_number


if __name__ == "__main__":
	run()