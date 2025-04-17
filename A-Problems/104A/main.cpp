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
    // so we are given queen of spades which = 10
    // int base = 10
    // loop through all possiblites of cards so 2-10, A, and face cards
    // if a base + card == n; cnt++

    int n;
    std::cin >> n;
    int deck[14] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11}; // this includes 1 and 11 for ace

    int cnt = 0;
    bool queenIsPossible = false;
    for (int suit = 0; suit < 4; suit++)
        for (size_t card = 0; card < 14; card++)
            if ((deck[card] + 10) == n) {
                if (deck[card] == 10) queenIsPossible = true;
                cnt++;
            }
            


    if (queenIsPossible) std::cout << cnt-1;
    else std::cout << cnt;
    return 0;
}
