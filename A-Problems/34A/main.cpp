#include <bits/stdc++.h>

int main()
{
    int n;
    std::cin >> n;
    std::cin.ignore();

    std::vector<int> a;

    std::string line; int num; 
    getline(std::cin, line); std::stringstream ss(line); while (ss >> num) a.emplace_back(num);

    for (int i = 0; i < n; i++) {

        if (((i + 1) != n) && (std::abs(a[i] - (a[i] + 1))) == 0) {
            std::cout << i << " " << i + 1 << "\n";
        } else if (i + 1 == n && abs(a[i] - a[0]) == 0) {
            std::cout << i+1 << " " << 1 << "\n";
        }

    }

    
    return 0;
}
