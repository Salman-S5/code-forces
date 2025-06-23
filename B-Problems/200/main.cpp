#include <bits/stdc++.h>

int main()
{
    int n;
    std::cin >> n;
    int d = n;
    std::cin.ignore();

    float perc = 0.0;
    while (d--) {
        int temp;
        std::cin >> temp;

        perc += (temp);
    }

    std::cout << perc/n;

    return 0;
}
