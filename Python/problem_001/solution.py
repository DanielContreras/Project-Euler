"""
Project Euler Problem 1
=======================
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get
 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
"""

import sys
import timeit


def funky(k, a=1, a_n=1000):
    """Computes a summation in a range i from a to a_n that is divisible by k=3,5 (or any k)

    The problem can be reduced, mathematically, to give us the following equation

        sum(3n)_{n=1}^{333} + sum(5n)_{n=1}^{199} - sum(15n)_{n=1}^{66} = 233,168.

    These summations make use of the triangular sum identity 

        sum(k)_{k=1}^{n} = n(n+1) / 2

    which is an incredibly efficient way to sum in this way. As a result, our problem is also solved
    using a very efficient method. For reference, this method computes 598 summations while the 
    naive method of looping over 1000 objects would clearly make 1000 iterations. 
    
    This method only computes a single summation, for instance, 

        sum(3n)_{n=1}^{333}

    by passing k=3, a=1, a_n=1000. The method will start by computing the range that the summation should
    iterate over. In the case of k=3 we find that the summation range is from 1 to 333. 
    """
    sum_range = int(((a_n-a)/k) + 1)
    return sum((k*i) for i in range(a, sum_range))



def main(args=None) -> None:
    iterations = 1000
    print(f"solution: {funky(3)+funky(5)-funky(15)}")
    print(f'{iterations} loops: {timeit.timeit(stmt=f"{funky(3)+funky(5)-funky(15)}", number=iterations)} usec per loop.')


if __name__ == "__main__":
    sys.exit(main())