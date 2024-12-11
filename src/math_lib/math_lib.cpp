#include "math_lib.h"
#include <cmath>
#include <algorithm>
#include <numeric>

namespace MathLib
{
    // Function to check equality with tolerance
    bool isEqual(double a, double b, double tolerance)
    {
        return std::abs(a - b) <= tolerance;
    }

    // Function to calculate the median of a vector
    double median(const std::vector<double>& arr)
    {
        if (arr.empty())
        {
            throw std::invalid_argument("Array is empty, median cannot be calculated.");
        }

        std::vector<double> sortedArr = arr;
        std::sort(sortedArr.begin(), sortedArr.end());

        size_t size = sortedArr.size();
        if (size % 2 == 0)
        {
            return (sortedArr[size / 2 - 1] + sortedArr[size / 2]) / 2.0;
        }
        else
        {
            return sortedArr[size / 2];
        }
    }

    // Function for greatest common divisor (GCD)
    int GCD(int a, int b)
    {
        if (b == 0) return a;
        return GCD(b, a % b);
    }

    // Function to check if a number is prime
    bool isPrime(int n)
    {
        if (n <= 1)
            return false;

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }

    // Function to calculate least common multiple (LCM)
    int leastCommonMultiple(int a, int b)
    {
        int lcm = 1;
        int maxNum = std::max(a, b);
        for (int i = maxNum; i <= a * b; i += maxNum)
        {
            if (i % a == 0 && i % b == 0)
            {
                lcm = i;
                break;
            }
        }
        return lcm;
    }

    // Function for square root calculation
    template <typename T>
    double sqrt(T a)
    {

		if (b == 0) return a;
		return GCD(b, a % b);
	}




    double calculateAverage(const std::vector<double>& numbers) {
        if (numbers.empty()) {
            throw std::invalid_argument("����� ����� �� ���� ���� ��������");
        }

        
        double sum = std::accumulate(numbers.begin(), numbers.end(), 0.0);
        return sum / numbers.size();

        if (a == 0)
            return 0;
        if (a < 0)
            throw std::invalid_argument("Cannot get the square root of a negative number");
        double x = a;
        double result;
        while (true)
        {
            result = 0.5 * (x + (a / x));
            if (isEqual(result, x, 0.00001))
                break;
            x = result;
        }
        return result;

    }
}
