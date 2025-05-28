#include <bits/stdc++.h>

int main()
{
    int A, B, C, D;
    std::cin >> A >> B >> C >> D;

    if (C < A) std::cout << "Yes";
    else if (C == A) {
        if (D < B) std::cout << "Yes" << '\n';
        else if (D > B) std::cout << "No" << '\n';
    }   
    else std::cout << "No" << '\n';

    return 0;
}
