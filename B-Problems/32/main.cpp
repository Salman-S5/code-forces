#include <bits/stdc++.h>

int main()
{
    std::string line;
    std::cin >> line;

    for (size_t i = 0; i < line.size(); i++) {
        if (line[i] == '-' && line[i+1] == '.') {
            i += 1;
            std::cout << 1;
        }
        else if (line[i] == '-' && line[i+1] == '-') {
            i += 1;
            std::cout << 2;
        }
        else if (line[i] == '.' && (line[i+1] == '-' or line[i+1] == '.' or i == (line.size()-1))) std::cout << '0';
    }
    std::cout << "\n";
    return 0;
}
