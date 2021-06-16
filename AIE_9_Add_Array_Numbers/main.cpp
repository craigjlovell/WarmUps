#include <iostream>
#include <vector>
#include <utility>

std::pair<int, int> arrayNumbers(std::vector<int> arr, int n)
{
	for (int i = 0; i < arr.size(); i++)
	{
		for (int j = i + 1; j < arr.size(); j++)
		{
			if (arr[i] + arr[j] == n)
			{
				//std::cout << "Pair Found" << " " << arr[i] << " " << arr[j] << " : " ;
				std::pair<int, int> answer (arr[i] ,arr[j]);
				return (answer);
			}
		}
	}
}

int main()
{
	auto r1 = arrayNumbers({ 1, 4, 8, 9, 12 }, 13);
	auto r2 = arrayNumbers({ 1, 2, 3, 7, 8, 9 }, 10);
	auto r3 = arrayNumbers({ 5, 7, 12, 13, 14, 15, 16, 17 }, 20);

	std::cout << r1.first << " + " << r1.second << " = " << 13 << std::endl;// output [1, 12]
	std::cout << r2.first << " + " << r2.second << " = " << 10 << std::endl;// output [1, 12]
	std::cout << r3.first << " + " << r3.second << " = " << 20 << std::endl;// output [1, 12]
	
}