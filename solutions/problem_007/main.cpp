/**
 * By listing the first six prime numbers: 2, 3, 5, 7, 11,
 * and 13, we can see that the 6th prime is 13.
 * What is the 10 001st prime number?
 */

#include <iostream>
#include <vector>
#include <cmath>

using std::vector;

/** Declaration of functions */
bool is_prime(const int &n);
vector<int> nth_prime(const int &n);

int main(int argc, char *argv[])
{
    vector<int> primes = nth_prime(atoll(argv[1]));
    for (auto i : primes)
    {
        std::cout << i << std::endl;
    }
    return 0;
}

/**
 * Returns a vector of prime numbers from the first prime number to the nth
 * prime number. The argument must specify a valid integer greater than or
 * equal to 1. 
 *
 * @param The nth prime that is being checked
 * @return A vector of primes from 1 to the nth integer, provided by the parameter
 */
vector<int> nth_prime(const int &n)
{
    vector<int> primes;
    int num = 2;

    for (int i = 1; i <= n; ++i)
    {
        while (!is_prime(num))
        {
            ++num;
        }
        primes.push_back(num);
        ++num;
    }
    return primes;
}

/**
 * Returns true if the parameter provided is a prime number or false if the parameter 
 * is a composite number.
 *
 * @param The integer that is to be checked for prime or composite number  
 * @return true if the parameter is a prime number or false if the number is a composite
 *         number
 */
bool is_prime(const int &n)
{
    if (n == 2)
    {
        return true;
    }
    if (n < 2 || n % 2 == 0)
    {
        return false;
    }
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}