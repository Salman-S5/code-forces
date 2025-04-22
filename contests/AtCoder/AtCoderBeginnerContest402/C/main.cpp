#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <map>
#include <cctype>

int main()
{
	
    int N, M;
    std::cin >> N >> M;
    std::cin.ignore();

    // put each dish in a vector of vector ints eg. {{0: 2, 1, 3}, {1: 2, 4, 6}}
    std::vector<std::vector<int>> dishes;
    
    for (int i = 0; i < M; i++) {
        std::string line;
        std::getline(std::cin, line);
        std::istringstream iss(line);
        std::vector<int> row;
        int num;
        while (iss >> num) row.emplace_back(num);
        dishes.emplace_back(row);
    }

    // put each ingredient in a vecotr
    std::vector<bool> counted(M, false);
    int cnt = 0;
    std::vector<int> ingred;
    for (int i = 0; i < N; i++) {
        std::string line;
        std::getline(std::cin, line);
        std::istringstream iss(line);
        int num;
        while (iss >> num) ingred.emplace_back(num);

        
        for (int j = 0; j < M; j++) {
            auto& dish = dishes[j];
            auto iter = std::find(std::next(dish.begin()), dish.end(), ingred[i]);
            if (iter != dish.end()) dish.erase(iter);
        }

        for (int r = 0; r < M; r++) {
            if (!counted[r] && dishes[r].size() == 1) {
                counted[r] = true;
                cnt++;
            }
        }
        std::cout << cnt << "\n";
    }

    // while looping through ingredient vector see if there are any vector with that number, then remove it

    // then after checking that inside the same loop loop again and do a full check to see if any dishes have 
    // no value, if it does add to cnt and print cnt after each iteration

    return 0;
}
