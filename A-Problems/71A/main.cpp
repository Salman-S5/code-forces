#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <map>

int main()
{
    int n;
    std::cin >> n;
    std::cin.ignore();
    std::vector<std::string> abbreviations;

    for (int w = 0; w < n; w++) {
        std::string line;
        std::getline(std::cin, line);

        int size = line.size();
        if (size <= 10) abbreviations.emplace_back(line);
        else if (size > 10) abbreviations.emplace_back(line[0] + std::to_string((size - 2)) + line.back());       
    }

    for (const auto& a : abbreviations) std::cout << a << '\n';
    
    
    return 0;
}
