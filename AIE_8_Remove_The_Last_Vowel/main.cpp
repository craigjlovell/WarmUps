// TODO: write your own starter code.
// Remember the following.
// 1. create the project and write the main method (1 min)
// 2. write some tests (2 min)
//    - call your function, pass in data... 
//    - just make sure its called... dont worry about logic yet.
// 3. make it compile(3 min max)
// 4. work out the logic (the rest of the time)
//    - work through the problem gradually, small steps, you dont need to know the answer upfront.
//    - use comments to help figure out what you need to do.
//    - iterate on your solution, use the debugger.
//
// NOTE:
// Like last week, many of you didnt even get to step 4. I know we can do better today :)

#include <iostream>
#include <vector>

std::string removeLastVowel(std::string line)
{
	int n = line.length();

	for (int i = 0; i < n / 2; i++)
	{
		std::swap(line[i], line[n - i - 1]);
	}

	std::vector<char> vowels = { 'a', 'e', 'i', 'o', 'u' };

	for (int i = 0; i < line.length(); i++)
	{
		if (std::find(vowels.begin(), vowels.end(), line[i]) != vowels.end())
		{
			line = line.replace(i, 1, "+");
			i -= 2;
			break;
		}
	}

	for (int i = 0; i < n / 2; i++)
	{
		std::swap(line[i], line[n - i - 1]);
	}
	return line;
}

int main()
{
	std::cout << removeLastVowel("Those who dare to fail miserably can achieve greatly.") << std::endl;
	std::cout << removeLastVowel("Love is a serious mental disease.") << std::endl;
	std::cout << removeLastVowel("Get busy living or get busy dying.") << std::endl;
}