#include <iostream>

// TODO:
// Create a function that returns the number of characters shared between two words.

int SharedLetters(std::string one, std::string two)
{
	int count = 0;
	for (int i = 0; i < one.length(); i++)
	{
		for (int j = 0; j < two.length(); j++)
		{
			if (one[i] == two[j] && one[i] != ' ' && two[j] != ' ')
			{
				count += 1;

				one.replace(i, 1, " ");
				two.replace(j, 1, " ");
			}
		}
	}
	return count;
}

int main()
{
	std::cout << SharedLetters("apple", "meaty") << std::endl; // 2
	std::cout << SharedLetters("fan", "forsook") << std::endl; // 1
	std::cout << SharedLetters("spout", "shout") << std::endl; // 4
}