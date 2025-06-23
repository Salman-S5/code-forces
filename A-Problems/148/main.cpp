#include <vector>
#include <iostream>

int main()
{
    int k, l, m, n, d;
    std::cin >> k >> l >> m >> n >> d;

    if (k == 1) std::cout << d;
    else
    {
        int drags [d];
        for (int x = 0; x < d; x++)
        {
            drags[x] = x+1;
        }
        int cnt = 0;

        for (int i = 0; i < d; i++)
        {
            if (drags[i]%k == 0) cnt++;
            else if (drags[i]%l == 0) cnt++;
            else if (drags[i]%m == 0) cnt++;
            else if (drags[i]%n == 0) cnt++;
        }

        std::cout << cnt;
    }
    
    return 0;
}