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

    std::string num;
    std::getline(std::cin, num);

    int luckyNumCnt = 0;
    for (size_t i = 0; i < num.size(); i++)
    {
        if (num[i] == '7' || num[i] == '4') luckyNumCnt += 1;
    }

    if (luckyNumCnt == 7 || luckyNumCnt == 4) std::cout << "YES";
    else std::cout << "NO";
    
    return 0;
}
