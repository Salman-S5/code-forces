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
    std::string a, b;
    std::cin >> a;
    std::cin.ignore();
    std::cin >> b;
    
    std::string temp;
    for (const auto& i : a)
    {
        temp += std::tolower(i);
    }

    a = temp;
    temp = "";
    for (const auto& j : b)
    {
        temp += std::tolower(j);
    }
    b = temp;

    if (a > b) std::cout << "1";
    else if (a < b) std::cout << "-1";
    else if (a == b) std::cout << "0";

    return 0;
}
