#include <iostream>
#include <vector>
#include <sstream>
#include <string>

int main() 
{
    int n;
    std::cin >> n;
    std::cin.ignore();

    std::vector<int> scores;

    std::string line;
    std::getline(std::cin, line);
    std::stringstream ss(line);
    int num;

    while (ss >> num)
    {
        scores.push_back(num);
    }

    int lowest =  10000;
    int highest = 0;
    int cnt = 0;

    for (int i = 0; i < scores.size(); i++)
    {
        if (i == 0) {
            highest = scores[i];
            lowest = scores[i];
        }
        else if (scores[i] > highest) {
            cnt++;
            highest = scores[i];
        }
        else if (scores[i] < lowest) {
            cnt++;
            lowest = scores[i];
        }
    }

    std::cout << cnt;
    return 0;
}