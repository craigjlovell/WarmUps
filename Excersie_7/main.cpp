#include <iostream>
#include <vector>
#include <algorithm>

// TODO: Write the sumMissingNumbers method here
int sumMissingNumbers(std::vector<int> arr)
{

    int min = arr[0];
    int max = arr[0];

    int sum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int i = min; i <= max; i++)
    {
        if (std::find(arr.begin(), arr.end(), i) == arr.end())
        {
            sum += i;
        }
        else
        {
            
        }
    }
    return sum;
}

int main(int argc, char** argv)
{
    // TODO: write tests to verify your output

    std::cout << "Answer: " << sumMissingNumbers({ 1, 3, 5 }) << " Expected 6 " << std::endl;
    std::cout << "Answer: " << sumMissingNumbers({ 1, 3, 5, 7, 10 }) << " Expected 29 " << std::endl;
    std::cout << "Answer: " << sumMissingNumbers({10, 7, 5, 3, 1}) << " Expected 29 " << std::endl;
    std::cout << "Answer: " << sumMissingNumbers({ 10, 20, 30, 40, 50, 60 }) << " Expected 1575 " << std::endl;

}