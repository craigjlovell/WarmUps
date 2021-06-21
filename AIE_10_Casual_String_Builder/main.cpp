#include <iostream>
#include <string>

std::string stringBuilder(std::string builder)
{
    std::string ans;
    for (int i = 0; i < builder.size(); i++)
    {
        if (builder.c_str() == "[")
        {
            int ind = builder.find_last_of('[');
        }
    }

    return builder;
}

int main(int argc, char** argv)
{
    std::cout << stringBuilder("3[a]2[bc]") << std::endl;
    std::cout << stringBuilder("3[a2[c]]") << std::endl;
    std::cout << stringBuilder("2[abc]3[cd]ef") << std::endl;
    return 0;
}