#include <bits/stdc++.h>

int main()
{
    int n;
    std::cin >> n;
    std::cin.ignore();

    std::vector<int> d;

    std::string line; int num; 
    getline(std::cin, line); std::stringstream ss(line); while (ss >> num) d.emplace_back(num);

    int a, b;
    std::cin >> a >> b;

    int years = 0;

    for (int i = a-1; i < b-1; i++) {
        years+=d[i];
    }

    std::cout << years << "\n";
    
    return 0;
}
