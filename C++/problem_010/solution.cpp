/**
 * The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 * Find the sum of all the primes below two million.
 */

#include <iostream>
#include <cstdint>
#include <cmath>

void sum_of_primes();
bool is_prime(const int &n);

int main()
{
    sum_of_primes();
    return 0;
}

void sum_of_primes()
{
    int limit = 2000000;
    int num = 2;
    int64_t sum = 0;

    while (num < limit)
    {
        if ( is_prime(num) && num < limit) 
        {
            sum += num;
        }
        ++num;
    }
    std::cout << sum << std::endl;
}

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
