#include <iostream>
#include <vector>
#include <sstream>

int main()
{
    int k;
    std::cin >> k;
    std::cin.ignore();

    std::vector<int> test_cases;
    for (int x = 0; x < k; x++)
    {
        std::string line;
        std::getline(std::cin, line);

        std::istringstream iss(line);
    
        int num;
        while (iss >> num) test_cases.push_back(num);
    }

    for (int i = 0; i < k; i++)
    {
        if (test_cases[i]%2==0) std::cout << "NO" << std::endl;
        else std::cout << "YES" << std::endl;
    }
}