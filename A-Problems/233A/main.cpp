#include <iostream>
#include <vector>



int main()
{   
    int n;
    std::cin >> n;
    std::vector<int> perfect;
    
    if (n % 2 == 0)
    {
        for (int i = 1; i < n+1; i++)
        {
            if (i % 2 == 0) perfect.push_back(i-1);
            else perfect.push_back(i+1);
        }

        for (int i = 0; i < perfect.size(); i++)
        {
            if (i != perfect.size()-1) std::cout << perfect[i] << " ";
            else std::cout << perfect[i];
        }
    }
    else std::cout << -1;

    return 0;
}