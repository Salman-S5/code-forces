#include <iostream>
#include <stdio.h>
#include <vector>

int main()
{
    int r, c = 0;
    std::cin >> r >> c;
    std::cin.ignore();
    std::vector<std::string> map;
    std::string temp;

    for (int m = 0; m < r; m++)
    {
        std::getline(std::cin, temp);
        map.push_back(temp);   
    }

    std::vector<std::tuple<int, int>> robberies;

    for (int i = 1; i < r+1; i++)
    {
        for (int j = 1; j < c+1; j++)
        {
            continue;
        }
    }
    return 0;
}