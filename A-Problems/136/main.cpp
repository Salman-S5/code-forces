#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <sstream>
#include <cmath>

int main()
{
    
    int n;
    std::cin >> n;
    std::cin.ignore();

    std::string line;
    std::getline(std::cin, line);
    
    std::stringstream ss(line);
    std::vector<int> nums;
    int num;
    while (ss >> num) nums.push_back(num);  
    
    int gifts [n];
    for (int i = 0; i < n; i++)
    {
        gifts[nums[i]-1] = i+1;
    }

    for (int x = 0; x < n; x++)
    {
        std::cout << gifts[x];
        if (x < n-1) std::cout << " ";
    }

    return 0;
}
