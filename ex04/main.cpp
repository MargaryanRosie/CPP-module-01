#include "replace.hpp"

int main(int argc, char *argv[])
{
    std::string content;
    char character;

    if (argc != 4)
    {
        std::cerr
            << "Error: expected 3 arguments (filename, s1, s2)"
            << std::endl;
        return 1;
    }

    if (argv[2][0] == '\0')
    {
        std::cerr << "Error: s1 cannot be empty" << std::endl;
        return 1;
    }

    std::ifstream file(argv[1]);

    if (!file.is_open())
    {
        std::cerr << "Error: could not open file "
                  << argv[1] << std::endl;
        return 1;
    }

    while (file.get(character))
        content += character;

    if (!file.eof())
    {
        std::cerr << "Error: could not read file "
                  << argv[1] << std::endl;
        return 1;
    }

    std::string newString = replace(content, argv[2], argv[3]);
    std::string outFilename = std::string(argv[1]) + ".replace";

    std::ofstream outFile(outFilename.c_str());

    if (!outFile.is_open())
    {
        std::cerr << "Error: could not open file "
                  << outFilename << std::endl;
        return 1;
    }

    outFile << newString;

    if (!outFile.good())
    {
        std::cerr << "Error: could not write file "
                  << outFilename << std::endl;
        return 1;
    }

    return 0;
}