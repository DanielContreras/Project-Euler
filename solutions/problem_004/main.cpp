/**
 * A palindromic number reads the same both ways. The largest palindrome
 * made from the product of two 2-digit numbers is 9009 = 91 x 99.
 * Find the largest palindrome made from the product of two 3-digit numbers.
 */

#include <iostream>
#include <cstdint>
#include <string>
#include <algorithm>
#include <cmath>

/** Declaration of functions */
int64_t palindrome(int n);
bool is_palindrome(const int64_t &n);

int main(int argc, char *argv[])
{
    int digit = atoll(argv[1]);
    std::cout << palindrome(digit) << std::endl;
    return 0;
}

/**
 * Find all the palindromes of n-digit arguments
 * eg; if argument passed in is 1, will find all palindromes
 * that are a product of two 1-digit products.
 */
int64_t palindrome(int n)
{
    int max = pow(10, (n+1)) - 1;
    int64_t min = pow(10, n), tmp_max = 0;

    for (int i = max; i >= min ; --i)
    {
        for (int j = max; j > min; j--)
        {
            if (is_palindrome(i * j) && tmp_max < (i * j))
            {
                tmp_max = i * j;
            }
        }
    }
    return tmp_max;
}

bool is_palindrome(const int64_t &n)
{
    std::string s = std::to_string(n);
    std::string s_r = std::to_string(n);
    std::reverse(s_r.begin(), s_r.end());
    return !s.std::string::compare(s_r);
}
