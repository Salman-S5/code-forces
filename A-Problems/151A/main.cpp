#include <algorithm>
#include <sstream>
#include <string>
#include <vector>
#include <iostream>

int main() 
{
    int n, k, l, c, d, p, nl, np;
    std::cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int ttwd = static_cast<double>(k * l) / nl; // total toasts w/ drinks
    int ttwl = c * d; // total toasts w/ limes slices
    int ttws = static_cast<double>(p) / np; // total toasts w/ salt
    int tt = static_cast<double>(std::min({ttwd, ttwl, ttws})) / n; // total toasts :)

    std::cout << tt;
}