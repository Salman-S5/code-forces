#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <limits>
#include <set>

int main()
{
    int k;
    std::cin >> k;
    std::cin.ignore();

    std::vector<std::vector<int>> test_cases;
    for (int x = 0; x < k; x++)
    {
        std::string line;
        std::getline(std::cin, line);

        std::istringstream iss(line);

        std::vector<int> temp;
        for (char c : line)
        {
            if (isdigit(c)) temp.push_back(c - '0');
        }

        test_cases.push_back(temp);
    }


    for (int i = 0; i < k; i++)
    {
        std::vector<std::set<int>> removed(k);
        int lowestCost = std::numeric_limits<int>::max();;

        for (int j = 0; j < test_cases[i].size(); j++)
        {
            if (test_cases[i][j] < lowestCost)
            {
                lowestCost = test_cases[i][j];
            }

            removed[i].insert(test_cases[i][j]);
        }

        std::cout << removed[i].size() << std::endl;

    }

    return 0;
}

// 3 edge cases
// 1. if all numbers consists of the same digits we print one of them
// 2. if all digits are uniqie it counts all unique digits
// 3. if the smallest digit appears more than once we ignore it