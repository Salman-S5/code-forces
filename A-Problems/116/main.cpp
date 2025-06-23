#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <map>

int main()
{
    int n;
    std::cin >> n;
    std::cin.ignore();

    std::vector<std::tuple<int, int>> stops;

    int a, b;
    while (std::cin >> a >> b)
    {
        stops.emplace_back(a, b);
    }

    int minCapacity = 0;
    int currentPassengers = 0;

    for (int i = 0; i < n; i++)
    {
        currentPassengers -= std::get<0>(stops[i]);
        currentPassengers += std::get<1>(stops[i]);

        if (currentPassengers > minCapacity) minCapacity = currentPassengers;
    }

    std::cout << minCapacity;

    return 0;
}
