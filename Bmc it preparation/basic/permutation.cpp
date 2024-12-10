#include <iostream>
#include <algorithm>

void findPermutations(std::string str, int left, int right)
{
    if (left == right)
    {
        std::cout << str << std::endl;
    }
    else
    {
        for (int i = left; i <= right; i++)
        {
            std::swap(str[left], str[i]);
            findPermutations(str, left + 1, right);
            std::swap(str[left], str[i]); // Backtrack
        }
    }
}

int main()
{
    std::string str = "abc";
    std::cout << str.size() << std::endl;
    std::cout << "Permutations of " << str << ":" << std::endl;
    findPermutations(str, 0, str.size() - 1);
    return 0;
}
