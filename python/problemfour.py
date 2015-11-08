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

	# create a new list to store the sorted numbers, and add
	# the first number so we have something to compare to.
	new_numbers = [numbers[0]]
	
	# iterate int_list (skip the first value, we added it above).
	for n in numbers[1:]:
		# determine where to insert n in the new_list.
		for index, nn in enumerate(new_numbers):
			a = combine([n, nn])
			b = combine([nn, n])
			if a > b:
				new_numbers.insert(index, n)
				break
			# if end of list is reached, add n to the end.
			elif nn == new_numbers[-1]:
				new_numbers.append(n)
				break
	
	# combine the numbers in the new_ist before returning.
	return combine(new_numbers)


def combine(numbers):
	""" 
	Combines a list of numbers together. The absolute
	value is used for negative numbers.
	For example: The list [7, -34, 2, 910], would return
	a BigInteger with a value of 7342910.
	
	:param numbers: The list of integers to combine.
	:rtype: integer
	"""
	# combine the numbers into a string, abs() will convert 
	# any negative integers to positive.
	s = "".join(str(abs(n)) for n in numbers)
	
	# convert the string back to an integer before returning.
	return int(s)


def run():
	# initialise the list of non negative integers.
	int_list = [50, 2, 1, 9];
	print "List of ints:", int_list
		
	# compute the largest possible number.
	largest_number = get_largest_number(int_list)
	print "Largest possible number:", largest_number


if __name__ == "__main__":
	run()