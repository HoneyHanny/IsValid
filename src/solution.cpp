#include "solution.h"

bool Solution::IsValid(std::string word)
{
    bool hasVowel = false;
    bool hasConsonant = false;

    if (word.length() < 3)
        return false;

    for (auto c = word.cbegin(); c != word.cend(); ++c)
    {
        // ASCII ranges: 0-9, A-Z, a-z
        if ((*c >= 48 && *c <= 57) || (*c >= 65 && *c <= 90) || (*c >= 97 && *c <= 122))
        {
            if (!hasVowel && IsVowel(*c))
                hasVowel = true;
            else if (!hasConsonant && IsConsonant(*c))
                hasConsonant = true;
        }
        else
        {
            return false;
        }
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