#include <bits/stdc++.h>

int main()
{
    std::string line; getline(std::cin, line); 
    line.erase(std::remove_if(line.begin(), line.end(), isspace), line.end());
    std::transform(line.begin(), line.end(), line.begin(), ::toupper);
    
    std::vector<char> vowels {'A', 'E', 'I', 'O', 'U', 'Y'};

    for (int i = 0; i < 6; i++) {
        char x = line[line.size() - 2];
        if (std::find(vowels.begin(), vowels.end(), x) != vowels.end()) {
            std::cout << "YES";
            break;
        } else { std::cout << "NO"; break;}
    }

    return 0;
}
