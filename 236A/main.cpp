#include <iostream>
#include <string>
#include <set>

int main()
{
    std::string s;
    std::cin >> s;
    std::set<char> uniqueChars;

    for (int i : s)
    {
        uniqueChars.insert(i);
    }

    if (uniqueChars.size() % 2 == 0) std::cout << "CHAT WITH HER!";
    else std::cout << "IGNORE HIM!";

    return 0;
}