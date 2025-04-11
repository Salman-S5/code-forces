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

    std::vector<int> nums;

    std::string line;
    std::getline(std::cin, line);
    
    std::stringstream ss(line);

    int num;
    while (ss >> num) nums.push_back(num);

    std::tuple<int, int> smallest;
    std::tuple<int, int> largest;
    for (int x = 0; x < n; x++)
    {
        if (x == 0) 
        {
            smallest = std::make_tuple(nums[x], x);
            largest = std::make_tuple(nums[x], x);
        }

        if (nums[x] <= std::get<0>(smallest)) smallest = std::make_tuple(nums[x], x);
        if (nums[x] > std::get<0>(largest)) largest = std::make_tuple(nums[x], x);
    }

    int cnt = 0;
    int i_smallest = std::get<1>(smallest);
    int i_largest = std::get<1>(largest);

    while (i_largest > 0)
    {
        if (i_largest-1 == i_smallest) i_smallest++; 
        std::iter_swap(nums.begin() + i_largest, nums.begin() + i_largest-1);
        cnt++;
        i_largest--;
    }

    while (i_smallest < n -1)
    {
        std::iter_swap(nums.begin() + i_smallest, nums.begin() + i_smallest+1);
        cnt++;
        i_smallest++;
    }

    std::cout << cnt;
    return 0;
}
