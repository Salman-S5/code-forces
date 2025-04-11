#include <vector>
#include <sstream>
#include <string>
#include <iostream>
#include <algorithm>

int main()
{
    int t;
    std::cin >> t;
    std::cin.ignore();

    for (int l = 0; l < t; l++)
    {
        int n;
        std::cin >> n;
        std::cin.ignore();

        std::string line;
        std::getline(std::cin, line);
        std::stringstream ss(line); 

        std::vector<int> a;

        int num;
        while (ss >> num) a.push_back(num);

        std::sort(a.begin(), a.end());

        bool changed = true;
        
        while ((a.size() > 1) && changed)
        {
            changed = false;
            for (size_t i = 0; i < a.size() - 1; i++)
            {
                if (a[i] == a[i+1]) {
                    a.erase(a.begin() + i);
                    changed = true;
                    break;
                }
                else if (std::abs(a[i]-a[i+1]) <= 1) {
                    if (a[i] < a[i+1]) a.erase(a.begin() + i);
                    else a.erase(a.begin() + (i+1));
                    changed = true;
                    break;
                }
            }

        }

        if (a.size() == 1) std::cout << "Yes" << std::endl;
        else std::cout << "No" << std::endl;
    }

    return 0;
}