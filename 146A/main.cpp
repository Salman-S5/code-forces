#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <sstream>
#include <cmath>

int main()
{
    // put n into int and ticket num into string
    int n;
    std::cin >> n;
    std::cin.ignore();

    std::string tnum;

    std::getline(std::cin, tnum);

    // Check if number is even
    if (n >= 2)
    {
        int half = n/2;
        int left = 0;
        int right = 0;
        for (int i = 0; i < n; i++)
        {
            // Check if each digit is 4 or 7
            if (tnum[i] != '4' && tnum[i] != '7') {
                std::cout << "NO";
                return 0;
            }
            
            // Split vector in half and see if left == right
            if (i < half) {
                left += tnum[i] - '0';
            }
            else if (i >= half) {
                right += tnum[i] - '0';
            }
        }

        // Print count of Yes if lukcy else No
        if ((left == right) && left > 0 && right > 0) std::cout << "YES";
        else {
            std::cout << "NO";
        }
    }

    else std::cout << "NO";

    return 0;
}