#include <iostream>
#include <sstream>
#include <vector>

int main()
{
    int n, k;
    std::cin >> n >> k;
    std::cin.ignore();

    std::vector<int> scores;

    std::string line;
    std::getline(std::cin, line);
    std::istringstream iss(line);

    int num;
    while (iss >> num) scores.push_back(num);
    
    int cnt = 0;
    int kth_score = scores[k - 1];
    for (int score : scores)
    {
        if (score >= kth_score && score > 0) cnt++;
    }

    std::cout << cnt;
    return 0;
}