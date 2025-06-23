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
    std::cin >> b;

    std::string c;

    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] == b[i]) c += "0";
        else c += "1";
    }

    std::cout << c;

    return 0;
}
