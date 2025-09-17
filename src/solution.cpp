#include "solution.h"

bool Solution::IsValid(std::string word)
{
    bool hasVowel = false;
    bool hasConsonant = false;

    if (word.length() < 3)
        return false;

    for (auto c = word.cbegin(); c != word.cend(); ++c)
    {
        bool valid = false;
        for (int i = 0; i < 62; ++i)
        {
            if (*c == valids[i])
            {
                if (!hasVowel && IsVowel(*c))
                    hasVowel = true;
                else if (!hasConsonant && IsConsonant(*c))
                    hasConsonant = true;
                valid = true;
            }
        }

        if (!valid)
            return false;
    }

    return hasConsonant && hasVowel;
}

bool Solution::IsVowel(char character)
{
    for (auto vowel : vowels)
        if (character == vowel)
            return true;
    return false;
}

bool Solution::IsConsonant(char character)
{
    for (auto consonant : consonants)
        if (character == consonant)
            return true;
    return false;
}