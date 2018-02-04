/**
 * The sum of the squares of the first ten natural numbers is,
 * 12 + 22 + ... + 102 = 385
 * The square of the sum of the first ten natural numbers is,
 * (1 + 2 + ... + 10)2 = 552 = 3025
 * Hence the difference between the sum of the squares of
 * the first ten natural numbers and the square of the sum is 3025 âˆ’ 385 = 2640.
 *
 * Find the difference between the sum of the squares of the 
 * first one hundred natural numbers and the square of the sum.
 */

#include <iostream>
#include <cstdint>
#include <cmath>

int main()
{
	int32_t s_squares = 0, s_sum = 0;

	for (int i = 1; i <= 100; ++i)
	{
		s_squares += pow(i, 2);
		s_sum += i;
	}
	// This commented out line does the same thing...
	// Speed is the same @ 0.02s but code is drastically reduced.
	// long n = 100;
	// std::cout << n * (n+1) * (n-1) * (3 * n + 2) / 12;
	std::cout << (pow(s_sum, 2) - s_squares) << std::endl;
	return 0;
}