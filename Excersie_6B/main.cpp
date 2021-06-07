#include <vector>
#include <string>
#include <iostream>

std::string shiftLetters(std::string w, int n)
{
    std::vector<int> spaceIndices;
    std::string newWord = "";
    for (int i = 0; i < w.length(); i++)
    {
        if (w[i] == ' ')
            spaceIndices.push_back(i);
        else
            newWord += w[i];
    }
    std::string result = "";
    result.resize(newWord.length(), ' ');
    for (int i = 0; i < newWord.length(); i++)
    {
        result[(i + n) % newWord.length()] = newWord[i];
    }
    for (int i : spaceIndices)
    {
        result.insert(i, 1, ' ');
    }
    return result;
}

int main(int argc, char** argv)
{
    std::cout << shiftLetters("Boom", 1) << "; Expected : mBoo" << std::endl;
    std::cout << shiftLetters("Boom", 2) << "; Expected : omBo" << std::endl;
    std::cout << shiftLetters("This is a test", 4) << "; Expected: test Th i sisa" << std::endl;
    std::cout << shiftLetters("A B C D E F G H", 5) << "; Expected : D E F G H A B C" << std::endl;

    return 0;
}