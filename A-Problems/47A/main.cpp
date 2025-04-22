#include <bits/stdc++.h>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 1; i < n+1; i++) {
        int tn = (i * (i + 1) / 2);
        if (tn == n) { std::cout << "YES"; return 0; }
    }

    std::cout << "NO";
    
    return 0;
}
