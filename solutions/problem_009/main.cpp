/**
 * A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
 *
 * a² + b² = c²
 * For example, 3² + 4² = 9 + 16 = 2² = 5².
 * 
 * There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 * Find the product abc.
 */

#include <iostream>
#include <cmath>

/** Function declarations */
int find_triplet_product(const int &sum);

int main(int argc, char *argv[])
{
    std::cout << find_triplet_product(1000) << std::endl;
    return 0;
}

/**
 * a² + b² = c²
 * a = k(m² - n²)
 * b = 2kmn
 * c = k(m² + n²)
 * m > n
 */
int find_triplet_product(const int &sum)
{
    int a, b, c;
    int sqr = sqrt(sum);

    for (int n = 1; n <= sqr; n++)
    {
        for (int m = n + 1; m <= sqr; m++)
        {
            a = m * m - n * n;
            b = 2 * (m * n);
            c = m * m + n * n;
            if (a + b + c == sum)
            {
                return a * b * c;
            }
        }
    }
}
