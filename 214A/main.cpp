#include <iostream>
#include <cmath>
#include <vector>
#include <tuple>


int main() 
{
    int n, m;
    std::cin >> n >> m; 
    std::vector<std::tuple<int, double>> pairs;
    int pair_count = 0;

    for (int a = 0; a < n+1; a++)
    {
        int b = n - a * a;
        if (b >= 0 && a == m - b * b)
        {
            pairs.push_back(std::make_tuple(a, b));
        }
    }

    std::cout << pairs.size();
    return 0;
}