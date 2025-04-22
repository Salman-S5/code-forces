#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <map>
#include <cctype>

int main()
{
    std::string S;
    std::cin >> S;

    std::string newStr;

    for (size_t i = 0; i < S.size(); i++) {
        if (std::isupper(S[i])) newStr += S[i];
    }

    std::cout << newStr;


    return 0;
}
