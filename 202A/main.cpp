#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

bool is_palindrome(const std::string& str)
{
    std::string reversed = str;
    std::reverse(reversed.begin(), reversed.end());
    return str == reversed;
}

std::set<std::string> all_palindromes_subsequences(const std::string& s)
{
    std::set<std::string> results;
    int l = s.length();

    for (int mask = 1; mask < (1 << l); mask++)
    {
        std::string subseq = "";

        for (int i = 0; i < l; i++)
        {
            if (mask &(1 << i)) {
                subseq += s[i];
            }
        }

        if (is_palindrome(subseq)) {
            results.insert(subseq);
        }
    }

    return results;
}

int main()
{
    std::string s;
    std::cin >> s;
    std::set<std::string> palindromes = all_palindromes_subsequences(s);

    std::cout << *palindromes.rbegin();

    return 0;
}
