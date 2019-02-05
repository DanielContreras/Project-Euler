/**
 * 2520 is the smallest number that can be divided by each of the
 * numbers from 1 to 10 without any remainder.
 * What is the smallest positive number that is evenly divisible
 * by all of the numbers from 1 to 20?
 * 
 * This code needs to be optimized. Current run-time: ~2.84s where
 * other people are getting aprox ~0.3s
 */

#include <iostream>

/** Declaration of functions */
bool check_divisibility(int n);

int main()
{
    int num = 1;
    bool num_found = false;

    while (!num_found)
    {
        if (check_divisibility(num))
        {
            std::cout << num << std::endl;
            num_found = true;
        }
        ++num;
    }

    return 0;
}

/**
 * Returns true if number supplied is divisble the constant range of 20
 */
bool check_divisibility(int n)
{
    const int range = 20;

    for (int i = 1; i <= range; ++i)
    {
        if (!(n % i == 0))
        {
            return false;
        }
    }
    return true;
}
