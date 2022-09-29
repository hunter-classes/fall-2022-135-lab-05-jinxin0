#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Is divisible?")
{
    CHECK(isDivisibleBy(100, 25) == true);
    CHECK(isDivisibleBy(35, 17) == false);
    CHECK(isDivisibleBy(99, 33) == true);
    CHECK(isDivisibleBy(23145, 5) == true);
}

TEST_CASE("Is a prime?")
{
    CHECK(isPrime(2) == true);
    CHECK(isPrime(3) == true);
    CHECK(isPrime(4) == false);
    CHECK(isPrime(5) == true);
    CHECK(isPrime(6) == false);
    CHECK(isPrime(7) == true);
    CHECK(isPrime(8) == false);
    CHECK(isPrime(9) == false);
}

TEST_CASE("Next Prime")
{
    CHECK(nextPrime(15) == 17);
    CHECK(nextPrime(17) == 19);
    CHECK(nextPrime(18) == 19);
    CHECK(nextPrime(20) == 23);
    CHECK(nextPrime(32) == 37);
}

TEST_CASE("Count primes in range")
{
    CHECK(countPrimes(1, 10) == 4);
    CHECK(countPrimes(10, 20) == 4);
    CHECK(countPrimes(15, 30) == 4);
    CHECK(countPrimes(20, 50) == 7);
}

TEST_CASE("Is a twin prime?")
{
    CHECK(isTwinPrime(3) == true);
    CHECK(isTwinPrime(4) == false);
    CHECK(isTwinPrime(5) == true);
    CHECK(isTwinPrime(6) == false);
    CHECK(isTwinPrime(7) == true);
}

TEST_CASE("Next twin prime")
{
    CHECK(nextTwinPrime(3) == 5);
    CHECK(nextTwinPrime(4) == 5);
    CHECK(nextTwinPrime(5) == 7);
    CHECK(nextTwinPrime(10) == 11);
    CHECK(nextTwinPrime(11) == 13);
}

TEST_CASE("Largest twin prime in range")
{
    CHECK(largestTwinPrime(5, 18) == 17);
    CHECK(largestTwinPrime(1, 31) == 31);
    CHECK(largestTwinPrime(14, 16) == -1);
}
