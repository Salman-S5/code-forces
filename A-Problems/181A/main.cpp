#include <iostream>
#include <stdio.h>
#include <vector>
#include <map>

int main()
{
    int r, c = 0;
    std::cin >> r >> c;
    std::cin.ignore();

    std::vector<std::string> city_map;
    std::string temp;

    for (int m = 0; m < r; m++)
    {
        std::getline(std::cin, temp);
        city_map.push_back(temp);   
    }

    std::vector<std::tuple<int, int>> robberies;
    for (int row = 0; row < r; row++)
    {
        for (int col = 0; col < c; col++)
        {
            if (city_map[row][col] == '*') {
                robberies.push_back(std::make_tuple(row+1, col+1));
            }
        }
    }

    std::map<int, int> row_cnts;
    for (const auto& robbery : robberies)
    {
        int row = std::get<0>(robbery);
        row_cnts[row] += 1;
    }

    std::map<int, int> col_cnts;
    for (const auto& robbery : robberies)
    {
        int col = std::get<1>(robbery);
        col_cnts[col] += 1;
    }

    std::string last_point;

    int min_row_value = 101; 
    int min_row_key = 0;
    for (const auto& pair : row_cnts) if (pair.second < min_row_value) {
        min_row_value = pair.second; min_row_key = pair.first;
    }

    int min_col_value = 101;
    int min_col_key = 0;
    for (const auto& pair : col_cnts) if (pair.second < min_col_value) {
        min_col_value = pair.second; min_col_key = pair.first;
    }
    std::cout << min_row_key << " " << min_col_key;

    return 0;
}