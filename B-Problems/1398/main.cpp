#include <bits/stdc++.h>

int main()
{
    int t;
    std::cin >> t;
    std::cin.ignore();

    while (t--) {
        std::string line;
        std::getline(std::cin, line);


        std::vector<int> res;
        int cnt = 0;
        for (char c : line) {
            if (c == '1') cnt++;
            else if (cnt != 0) {
                res.push_back(cnt);
                cnt = 0;
            }
        }

        if (cnt > 0) res.push_back(cnt);

        std::sort(res.begin(), res.end(), std::greater<int>());

        int alice_points = 0;
        for (size_t i = 0; i < res.size(); i++)  {
            if (i%2 == 0) alice_points+= res[i];
        }

        std::cout << alice_points << '\n';

    }


    return 0;
}
