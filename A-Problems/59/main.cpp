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
    std::string word;
    std::cin >> word;

    int cnt = 0;
    for (size_t i = 0; i < word.size(); i++) {
        if (std::isupper(word[i])) cnt++;
    }

    if (cnt > word.size()/2) {
        std::transform(word.begin(), word.end(), word.begin(), [](unsigned char c){ return std::toupper(c); });
        std::cout << word;
    } else if (cnt <= word.size()) {
        std::transform(word.begin(), word.end(), word.begin(), [](unsigned char c){ return std::tolower(c); });
        std::cout << word;
    }
    return 0;
}
