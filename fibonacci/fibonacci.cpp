#include <iostream>
#include "BigInt.h"

using namespace Dodecahedron;

Bigint __fastcall fibonacci(int N) {
    if (N < 0) {
        throw std::invalid_argument("Incorrect number");
    }
    else if (N == 0) return 0;
    else if (N < 3) return 1;

    Bigint sum = 0, last = 1, curr = 1;
    for (size_t i = 0; i < N-2; i++)
    {
        sum = last + curr;
        last = curr;
        curr = sum;
    }
    return sum;
}

int main()
{
    std::cout << fibonacci(600000);
    return 0;
}
