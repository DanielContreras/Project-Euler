/**
 * Largest prime factor
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 * List of some prime numbers: 
 * 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 
 * 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 
 * 109, 113, 127, 131, 137, 139, 149, 151 
 *
 * This problem took me approximately 3 hours.. In the end I took the algorithm from
 * here http://stackoverflow.com/questions/11924249/finding-prime-factors
 */

#include <iostream>
#include <cstdint> 
#include <vector>

using std::vector;

/* Declaration of functions to be used in project */
vector<int64_t> prime_factors(int64_t n);


int main(int argc, char *argv[])
{
    int64_t max = atoll(argv[1]);
    vector<int64_t> result = prime_factors(max);

    for (auto i : result)
    {
        std::cout << i << std::endl;
    }

    return 0;
}

/**
 * Returns a vector of prime numbers for the given input. 
 */
vector<int64_t> prime_factors(int64_t n)
{
    vector<int64_t> v;

    int64_t i = 2;

    while (i * i <= n)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            n /= i;
        }
        else
        {
            i++;
        }
    }
    if (n > 1)
    {
        v.push_back(n);
    }

    return v;
}
