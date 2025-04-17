#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <map>

bool is_prime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main()
{
    int n, m;
    std::cin >> n >> m;

    std::set<int> primes;

    for (int i = n + 1; i <= m; ++i) {
        if (is_prime(i)) {
            primes.insert(i);
            break; 
        }
    }

    if (!primes.empty() && *primes.begin() == m)
        std::cout << "YES";
    else
        std::cout << "NO";

    return 0;
}
