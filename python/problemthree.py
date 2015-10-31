"""
Write a function that computes the list of the first 100 
Fibonacci numbers. By definition, the first two numbers in 
the Fibonacci sequence are 0 and 1, and each subsequent number 
is the sum of the previous two. 

As an example, here are the first 10 Fibonacci numbers:
	0, 1, 1, 2, 3, 5, 8, 13, 21, and 34.

@author Matthew Jarvis
@created 31st Oct, 2015	
"""

def fibonacci(length):
	""" 
	Computes a list of Fibonacci numbers.
	
	:param length: The amount of Fibonacci numbers to compute.
 	:rtype: list.
	"""
	fib = [0 , 1]
	
	# compute Fibonacci numbers.
	while len(fib) != length:
		fib.append(fib[-1] + fib[-2])
	
	return fib[:length]
	

def run():
	# calculate the Fibonacci numbers.
	fib = fibonacci(100)
	
	# print the Fibonacci numbers.
	for f in fib:
		print "Fibonacci {}:\t{}".format(fib.index(f), f)


if __name__ == "__main__":
	run()