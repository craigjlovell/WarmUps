#include <iostream>
#include <vector>

std::string shiftLetters(std::string w, int n)
{
    std::string result = w.substr(w.length() - (n));

    std::vector<int> space;
    int length = w.length() - n;

    if (n > 0) 
    {
        for (int i = 0; i < length; i++)
        {
            if (w[i] == ' ')
                space.push_back(i);
            else
                result = result + w.at(i);
        }
    }

    for (int i : space)
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
