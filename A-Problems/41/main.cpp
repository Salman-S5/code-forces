#include <bits/stdc++.h>

int main()
{
    std::string s, t;
    std::cin >> s >> t;

    reverse(s.begin(), s.end());

    if (s == t) std::cout << "YES";
    else std::cout << "NO";
    
    return 0;
}
