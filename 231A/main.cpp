#include <iostream>
#include <vector>
#include <string>
#include <sstream>

int main()
{
    int problem_cnt;
    std::cin >> problem_cnt;
    std::cin.ignore();

    std::vector<std::string> x;
    std::string num;

    for (int i = 0; i < problem_cnt; i++)
    {
        std::getline(std::cin, num);
        x.push_back(num);
    }

    int solvable = 0;

    for (int i = 0; i < problem_cnt; i++)
    {
        int temp_solvable = 0;
        for (int j = 0; j < 5; j++)
        {   
            if (x[i][j] == '1')
            {
                temp_solvable++;
            }
        }
        
        if (temp_solvable >= 2) {
            solvable++;
        }
        temp_solvable = 0;
    }

    std::cout << solvable;
    return 0;
}
