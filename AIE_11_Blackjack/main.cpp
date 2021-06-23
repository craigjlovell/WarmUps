#include <iostream>
#include <vector>
// TODO:
// Write the function
bool overTwentyOne(std::vector<char> arr)
{
    int sum = 0;
    bool ace = false;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 'A')
            ace = true;
        else if (arr[i] == 'J' || arr[i] == 'Q' || arr[i] == 'K')
            sum += 10;
        else if (arr[i] - '0')
        {
            sum += arr[i] - '0';
        }
        if (sum > 21)
        {
            return true;
        }
    }

    if (ace)
    {
        if (sum <= 10)
        {
            sum += 11;
        }
        else
        {
            sum += 1;
        }
    }

    if (sum > 21)
    {
        return true;
    }
    else if (sum <= 21)
    {
        return false;
    }

}
 

int main(int argc, char** argv)
{
    // Test your code
    std::cout << overTwentyOne({ '2', '8', 'J' }) << std::endl;
    std::cout << overTwentyOne({ 'A', 'J', 'K' }) << std::endl;
    std::cout << overTwentyOne({ '5', '5', '3', '9' }) << std::endl;
    std::cout << overTwentyOne({ '2', '6', '4', '4', '5' }) << std::endl;
    std::cout << overTwentyOne({ 'J', 'Q', 'K' }) << std::endl;

    return 0;
}
