#include <bits/stdc++.h>

bool checkAllEqual(std::vector<int> a) {
    int f = a[0];
    for (int i : a) {
        if (i != f) {
            return false;
        }
    }

    return true;
}

int main()
{
    int t;
    std::cin >> t;
    
    while (t--) {
        int n;
        std::cin >> n;

        std::vector<int> a(n);
        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
        }

        if (checkAllEqual(a)) {
            std::cout << "NO" << '\n';
            continue;
        }

        std::cout << "YES" << '\n';
        int first = a[0];
        bool split = false;
        for (int i = 0; i < n; i++) {
            if (!split && a[i] != first) {
                std::cout << "1" << ' ';
                split = true;
            }
            else {
                std::cout << "2" << ' ';
            }
        }
        
        std::cout << '\n';
    }

    return 0;
}