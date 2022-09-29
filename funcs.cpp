#include <iostream>
#include "funcs.h"

bool isDivisibleBy(int n, int d)
{
    return (n % d) == 0;
}

bool isPrime(int n)
{
    if (n > 1)
    {
        for (int i = 2; i < n; i++)
            if ((n % i) == 0)
                return false;
    }
    else
        return false;
    return true;
}

int nextPrime(int n)
{
    while (!isPrime(++n))
    {}
    return n;
}

int countPrimes(int a, int b)
{
    int count = 0; 
    for (int i = a; i <= b; i++)
        if (isPrime(i))
            count++;
    return count;
}

bool isTwinPrime(int n)
{
    return isPrime(n) && (isPrime(n - 2) || isPrime(n + 2));
}

int nextTwinPrime(int n)
{
    while (!isTwinPrime(++n))
    {}
    return n;
}

int largestTwinPrime(int a, int b)
{
    for (int i = b; i >= a; i--)
        if (isTwinPrime(i))
            return i;
    return -1;
}
