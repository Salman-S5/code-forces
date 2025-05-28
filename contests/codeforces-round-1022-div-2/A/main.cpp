#include <bits/stdc++.h>

int main()
{
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;

        std::cout << floor(((n * n) / 4)) + 1 << '\n';
    }   
    return 0;
}