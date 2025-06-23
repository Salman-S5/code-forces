#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <map>
#include <numeric>

int main() 
{
    int a, b, n;
    std::cin >> a >> b >> n;

    bool simonsTurn = true;

    while(true)
    {
        int x;

        if (simonsTurn) x = std::gcd(a, n);
        else x = std::gcd(b, n);

        if (x > n) {
            std::cout << (simonsTurn ? 1: 0) << '\n';
            break;
        }

        n -= x;
        simonsTurn = !simonsTurn;
    }

    return 0;
}