#include <iostream>

void generateCombinations(std::string str, int start, std::string result)
{
    for (int i = start; i < str.length(); i++)
    {
        result.push_back(str[i]);
        std::cout << result << std::endl;
        generateCombinations(str, i + 1, result);
        result.pop_back();
    }
}

int main()
{
    std::string str = "abc";
    std::cout << "All combinations of \"" << str << "\":" << std::endl;
    generateCombinations(str, 0, "");
    return 0;
}
