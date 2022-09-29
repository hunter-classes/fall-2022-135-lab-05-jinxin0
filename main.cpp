#include <iostream>
#include "funcs.h"

int main()
{
    std::cout << std::boolalpha << isDivisibleBy(100, 25) << '\n';
    std::cout << std::boolalpha << isDivisibleBy(35, 17) << '\n';

    std::cout << "---------------------------------------\n";

    std::cout << std::boolalpha << isPrime(2) << '\n';
    std::cout << std::boolalpha << isPrime(3) << '\n'; 
    std::cout << std::boolalpha << isPrime(4) << '\n';
    std::cout << std::boolalpha << isPrime(5) << '\n';
    std::cout << std::boolalpha << isPrime(6) << '\n';
    std::cout << std::boolalpha << isPrime(7) << '\n';
    std::cout << std::boolalpha << isPrime(8) << '\n';
    std::cout << std::boolalpha << isPrime(9) << '\n';

    std::cout << "---------------------------------------\n";

    std::cout << nextPrime(14) << '\n'; 
    std::cout << nextPrime(17) << '\n';
    std::cout << nextPrime(18) << '\n';
    std::cout << nextPrime(20) << '\n';
    std::cout << nextPrime(32) << '\n';

    std::cout << "---------------------------------------\n";

    std::cout << countPrimes(1, 10) << '\n'; 
    std::cout << countPrimes(10, 20) << '\n';
    std::cout << countPrimes(15, 30) << '\n';
    std::cout << countPrimes(20, 50) << '\n';

    std::cout << "---------------------------------------\n";

    std::cout << isTwinPrime(3) << '\n'; 
    std::cout << isTwinPrime(4) << '\n';
    std::cout << isTwinPrime(5) << '\n';
    std::cout << isTwinPrime(6) << '\n';
    std::cout << isTwinPrime(7) << '\n';

    std::cout << "---------------------------------------\n";

    std::cout << nextTwinPrime(3) << '\n'; 
    std::cout << nextTwinPrime(4) << '\n'; 
    std::cout << nextTwinPrime(5) << '\n'; 
    std::cout << nextTwinPrime(10) << '\n'; 
    std::cout << nextTwinPrime(11) << '\n';

    std::cout << "---------------------------------------\n";

    std::cout << largestTwinPrime(5, 18) << '\n'; 
    std::cout << largestTwinPrime(1, 31) << '\n'; 
    std::cout << largestTwinPrime(14, 16) << '\n';

    return 0;
}
