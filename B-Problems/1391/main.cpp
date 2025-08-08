#include <bits/stdc++.h>

int main()
{  
    int t; std::cin >> t; std::cin.ignore();

    while (t--) {
        int n, m;
        std::cin >> n >> m;
        std::cin.ignore();

        std::vector<std::string> belts(n);

        for (int i = 0; i < n; i++) {
            std::getline(std::cin, belts[i]);
        }

        int wrong_direction = 0;

        for (int i = 0; i < m; i++) {
            if (belts[n-1][i] == 'D') wrong_direction++;
        }

        for (int i = 0; i < n; i++) {
            if (belts[i][m-1] == 'R') wrong_direction++;
        }

        std::cout << wrong_direction << '\n';

    }
    
    
    return 0;
}
