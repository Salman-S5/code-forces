#include <bits/stdc++.h>

int main()
{
    int m, n;
    std::cin >> m >> n;
    
    int board_size = m * n;

    if (board_size%2 == 0) {
        std::cout << board_size/2;
    } else {
        std::cout << (board_size-1)/2;
    }
    
    return 0;
}
