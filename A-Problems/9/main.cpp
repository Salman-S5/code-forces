#include <bits/stdc++.h>

int main()
{
    int Y, W;
    std::cin >> Y >> W;
    
    int maxVal = std::max(Y, W);
    int chance = 6 - maxVal + 1;
    int denominator = 6;

    int gcd = std::__gcd(chance, denominator);
    std::cout << (chance/gcd) << "/" << (denominator/gcd) << "\n";

}
