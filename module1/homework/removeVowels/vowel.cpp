#include "vowel.hpp"
#include <algorithm>
#include <vector>

void removeVowels(std::vector<std::string> &rmVowel)
{
    std::vector<char> listOfVovel{'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y'};

    for (auto &el : rmVowel)
    {
        for (const auto &vow : listOfVovel)
        {
            el.erase(std::remove(el.begin(), el.end(), vow), el.end());
        }
    }
}
