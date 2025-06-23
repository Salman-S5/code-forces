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
    int n, m;
    std::cin >> n >> m;

    int chipsHandedOutPreviousTurn = 0;
    for (int i = 1; i < n+1; i++) {
        m -= i;
        chipsHandedOutPreviousTurn = i;
        if (m < 0) break;
        if (i == n) i = 0;
    }

    if (m < 0) std::cout << m+chipsHandedOutPreviousTurn;
    else std::cout << m;

    return 0;
}
