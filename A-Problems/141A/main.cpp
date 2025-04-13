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

    // get count of each character that appears first line and second line
    std::string guest, host, mix;
    std::cin >> guest >> host >> mix;
    
    std::map<char, int> GHCnt;
    std::map<char, int> mCnt;

    for (size_t j = 0; j < guest.size(); j++)
    {
        GHCnt[guest[j]] += 1;
    }

    for (size_t j = 0; j < host.size(); j++)
    {
        GHCnt[host[j]] += 1;
    }

    for (size_t j = 0; j < mix.size(); j++)
    {
        mCnt[mix[j]] += 1;
    }

    if (GHCnt.size() != mCnt.size()) {
        std::cout << "NO";
        return 0;
    }

    for (size_t i = 0; i < GHCnt.size(); i++)
    {
        if (GHCnt[i] != mCnt[i]) {
            std::cout << "NO";
            return 0;
        }  
    }

    std::cout << "YES";

    return 0;
}
