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

    int Q;
    std::cin >> Q;
    std::cin.ignore();

    std::vector<int> query;
    for (int q = 0; q < Q; q++) {
        std::string line;
        std::getline(std::cin, line);

        if (line[0] == '1') {
            std::istringstream iss(line);
            int op, x;
            iss >> op >> x;
            query.emplace_back(x);
        }

        else if (line[0] == '2') {
            std::cout << query[0] << "\n";
            query.erase(query.begin());
        }


    }

    return 0;
}

