#include <bits/stdc++.h>

int main()
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    
    std::unordered_map<int, int> k{{2, a}, {3, b}, {5, c}, {6, d}};

    int sum = 0;
    for (int i = 0; i < k[2]; i++) {
        if ((k[5] > 0) && (k[6] > 0)) {
            k[5]--;
            k[6]--;
            sum+=256;
        } else if (k[3] > 0) {
            k[3]--;
            sum+=32;
        }
    }    
    
    std::cout << sum << "\n";
    return 0;
}
