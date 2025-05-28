#include <bits/stdc++.h>

int main()
{
    int N, K;
    std::cin >> N >> K;
    std::cin.ignore();

    int sum = 1;
    std::string line;
    std::getline(std::cin, line);
    std::stringstream ss(line);
    std::vector<int> nums;
    int num;
    while (ss >> num) {
        nums.emplace_back(num);
    }

    int sumDigits;
    for (const int i : nums) {
        sum *= i;

        sumDigits = std::to_string(std::abs(sum)).length();
        if (sumDigits > K) sum = 1;
    }
    
    std::cout << sum << '\n';

    return 0;
}
