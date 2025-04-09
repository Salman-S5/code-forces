#include <iostream>
#include <string>
#include <vector>

int main()
{
    int t;
    std::cin >> t;
    std::cin.ignore();

    std::vector<std::string> nums;

    for (int x = 0; x < t; x++) 
    {
        std::string temp;
        std::getline(std::cin, temp);
        nums.push_back(temp);
    }

    // position of last digit > than 0
    int POLD = 0;
    for (int i = 0; i < t; i++)
    {
        int l = nums[i].size();
        int cnt = 0;

        for (int j = 0; j < l; j++)
        {
            if (nums[i][j] != '0')
            {
                POLD = j;
            }
        }
        // left stuff
        for (int left = POLD - 1; left >= 0; left--)
        {
            if (nums[i][left] != '0') cnt++;
        }
        // right stuff
        for (int right = POLD + 1; right < l; right++)
        {
            if (nums[i][right] == '0') cnt++;
        }

        std::cout << cnt << std::endl;
    }

    return 0;
}