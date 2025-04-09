#include <vector>
#include <sstream>
#include <string>
#include <iostream>

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

        int len = a.size();
        for (int i = 0; i < len; i++)
        {
            for (int j = i + 1; j < len; j++)
            {
                if (len == 0) std::cout << "YES" << std::endl;
                else if (i == j) continue;
                else if (a[i] == a[j])
                {
                    a.erase(a.begin() + i);
                    len = a.size();
                    break;
                }
                else if (std::abs(a[i] - a[j]) <= 1) 
                {
                    if (a[i] < a[j]) a.erase(a.begin() + i);
                    else a.erase(a.begin() + j);
                    len = a.size();
                    break;
                }
                else std::cout << "NO" << std::endl;
            }
        }

    }






    return 0;
}