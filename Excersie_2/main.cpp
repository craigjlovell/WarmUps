#include <iostream>
#include <vector>

// TODO: Write the FindOdd function

int FindOdd(int arr[], int arr_size)
{
	
	//int findOdd2[] = { 20, 1, 1, 2, 2, 3, 3, 5, 5, 4, 20, 4, 5};
	//int findOdd3[10];

	int odd = 0;
	int even = 0;
	
	
	for(int i = 0; i < arr_size ; i++)
		if (arr[i] %2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}

	
	return odd;
}

int main(int argc, char** argv)
{
	// TODO: write test code to verify your function works as expected
	int findOdd1[] = { 1, 1, 2, -2, 5, 2, 4, 4, -1, -2, 5 };
	int findOdd2[] = { 20, 1, 1, 2, 2, 3, 3, 5, 5, 4, 20, 4, 5};
	//int findOdd3[10];

	std::cout << FindOdd(findOdd1, 11) << std::endl;
	std::cout << FindOdd(findOdd2, 13);
	//std::cout << FindOdd({ 20, 1, 1, 2, 2, 3, 3, 5, 5, 4, 20, 4, 5 }) << std::endl;
	//std::cout << FindOdd({ 1, 1, 2, -2, 5, 2, 4, 4, -1, -2, 5 }) << std::endl;
	//std::cout << FindOdd({10}) << std::endl;

}

