#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>


std::vector<std::string> palindrome_subsquence(std::string s)
{
    std::vector<std::string> posibilites;
    std::set<char> unique_char;
    int len = s.length();

    // check for unique chars
    for (int i = 0; i < len; i++)
    {
        unique_char.insert(s[i]);
    }

    // put unique chars into possiblites
    int temp = 0;
    for (char st : unique_char)
    {
        posibilites.push_back(std::string(1, st));
        temp++;
    }
    
    std::string posible_palindrome;
    // check for palindromes :O
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (i > j)
            {
                posible_palindrome = std::string(1, s[i]) + std::string(1, s[j]);
            }
            std::string placeholder = posible_palindrome;
            std::reverse(placeholder.begin(), placeholder.end());
            if (placeholder == posible_palindrome)
            {
                std::cout << posible_palindrome;
                posibilites.push_back(posible_palindrome);
            }
        }
    }

    return posibilites;
}

int main()
{
    std::string s;
    std::cin >> s;
    std::cout << "entered string: " << s << std::endl;
    
    palindrome_subsquence(s);

    return 0;
}
