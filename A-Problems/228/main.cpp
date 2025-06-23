#include <iostream>
#include <set>

int main()
{
    int s1, s2, s3, s4;
    std::cin >> s1 >> s2 >> s3 >> s4;

    std::set<int> uniqueColors = {s1, s2, s3, s4};

    std::cout << 4 - uniqueColors.size();

    return 0;
}