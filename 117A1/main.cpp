#include <iostream>
#include <sstream>
#include <vector>
#include <tuple>
#include <set>


int main()
{
    int n; 
    std::cin >> n;
    std::cin.ignore();

    std::vector<std::vector<int>> matrix;
    for (int x = 0; x < n; x++)
    {
        std::string line;
        std::getline(std::cin, line);

        std::istringstream iss(line);
        std::vector<int> row;

        int num;
        while (iss >> num) row.push_back(num);
        
        matrix.push_back(row);
    }

    std::set<std::tuple<int, int>> coords;

    // md is main diagonal
    for (int md = 0; md < n; md++)
    {
        coords.insert(std::make_tuple(md, md));
    }

    // sd is secondary diagonal
    for (int sd = 0; sd < n; sd++)
    {
        int i = n - 1 - sd;
        coords.insert(std::make_tuple(sd, i));
    }
    
    // vertical good
    int middle = (n-1)/2;
    for (int i = 0; i < n; i++)
    {
        coords.insert(std::make_tuple(i, middle));
        coords.insert(std::make_tuple(middle, i));
    }

    int sum = 0;
    // Print the coordinates in the set
    for (const auto& coord : coords)
    {
        sum += matrix[std::get<0>(coord)][std::get<1>(coord)];
    }

    std::cout << sum;

    return 0;
}