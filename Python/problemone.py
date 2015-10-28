"""
Write three functions that compute the sum of the numbers in 
a given list using a for-loop, a while-loop, and recursion.
Numbers: 3, 88, 22, 49, 65, 10, 1, 34, 101 and 77.
Answer:	450

@author	Matthew Jarvis
@date	28th Oct, 2015	
"""

def sum_with_for(nums):
	""" 
	Calculates and returns the sum of the numbers stored 
	in an array using a for loop.
	 	
	:param nums: The array of numbers to be summed.
	:rtype: int
	"""
	return 1
	
def sum_with_while(nums):
	""" 
	Calculates and returns the sum of the numbers stored 
	in an array using a while loop.
	 	
	:param nums: The array of numbers to be summed.
	:rtype: int
	"""
	pass
	
def sum_with_recursion(nums, i):
	""" 
	Calculates and returns the sum of the numbers stored 
	in an array using recursion.
	 	
	:param nums: The array of numbers to be summed.
	:param i: The index to begin summing from
	:rtype: int
	"""
	pass

def run():
	# main program
	
	numlist = [3, 88, 22, 49, 65, 10, 1, 34, 101, 77 ]
	sum_of_numlist = sum(numlist);
	
	print "Numbers:", numlist
	print "Actual answer:", sum_of_numlist
	print "Calculating..."
	print "For-loop answer:", sum_with_for(numlist)
	print "While-loop answer:", sum_with_while(numlist)
	print "Recursion answer:", sum_with_recursion(numlist, 0)


if __name__ == "__main__":
	run()