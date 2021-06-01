#include <iostream>

// TODO: Write your function here

bool isValidHexCode(std::string check)
{

	if (check[0] != '#' || check.length() != 7)
		return false;

	for (int i = 1; i < check.length(); i++)
	{
		if (check[i] >= 'a' && check[i] <= 'f')
		{
			continue;
		}
		if (check[i] >= 'A' && check[i] <= 'F')
		{
			continue;
		}
		if (check[i] >= '0' && check[i] <= '9')
		{
			continue;
		}
		return false;
	}
	return true;
}

int main()
{
	std::cout << isValidHexCode("#CD5C5C") << ": expected true" << std::endl;
	std::cout << isValidHexCode("#EAECEE") << ": expected true" << std::endl;
	std::cout << isValidHexCode("#eaecee") << ": expected true" << std::endl;
	std::cout << isValidHexCode("#CD5C58C") << ": expected false" << std::endl;
	std::cout << isValidHexCode("#CD5C5Z") << ": expected false" << std::endl;
	std::cout << isValidHexCode("#CD5C&C") << ": expected false" << std::endl;
	std::cout << isValidHexCode("#Cd5C&c") << ": expected false" << std::endl;
	std::cout << isValidHexCode("CD5C5C") << ": expected false" << std::endl;
}


//Create a function that determines whether a string is a valid hex code.

// A hex code must begin with a pound key # and is exactly 6 characters in length. Each character must be a digit from 0-9 or an alphabetic character from A-F. All alphabetic characters may be uppercase or lowercase (not a mix of both).