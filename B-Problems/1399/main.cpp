#include <algorithm>
#include <bits/stdc++.h>

int main()
{
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<long long> a(n), b(n);

        for (int i = 0; i < n; i++) std::cin >> a[i];
        for (int i = 0; i < n; i++) std::cin >> b[i];

        long long a_min = *std::min_element(a.begin(), a.end());
        long long b_min = *std::min_element(b.begin(), b.end());

        long long total_steps = 0;

        for (int i = 0; i < n; i++) {
            long long steps_for_a = a[i] - a_min;
            long long steps_for_b = b[i] - b_min;
            total_steps += std::max(steps_for_a, steps_for_b);
        }

        std::cout << total_steps << "\n";
    }

    return 0;
}
