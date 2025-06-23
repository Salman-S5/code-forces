#include <bits/stdc++.h>

int main()
{
    int n, d;
    std::cin >> n >> d;
    std::cin.ignore();

    std::vector<int> soldiers;
    std::string line;
    std::getline(std::cin, line);
    std::stringstream ss(line);
    int num;
    while (ss >> num) soldiers.emplace_back(num);
    
    int cnt = 0;
    for (size_t i = 0; i < soldiers.size(); i++) {
        for (size_t j = 0; j < soldiers.size(); j++) {
            if ((i != j)  && (abs(soldiers[i]-soldiers[j]) <= d)) {
                cnt++;
            }
        }
    }

    std::cout << cnt << '\n';

    return 0;
}
