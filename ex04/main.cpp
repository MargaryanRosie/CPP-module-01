#include "replace.hpp"

int main(int argc, char *argv[])
{
    std::string content;
    std::string line;

    if ( argc != 4 )
    {
        std::cerr << "Error: expected 3 arguments (filename, s1, s2)" << std::endl;
        return 1;
    }

    std::ifstream file(argv[1]);
    if (!file.is_open())
    {
        std::cerr << "Error: could not open file " << argv[1] << std::endl;
        return 1;
    }

    while (std::getline(file, line))
    {
        content += line;
        content += "\n";
    }

    std::string new_string = replace(content, argv[2], argv[3]);

    std::string outFilename = std::string(argv[1]) + ".replace";

    std::ofstream outFile( outFilename.c_str());
    if(!outFile)
    {
            std::cerr << "Error: could not open file " << argv[1] << std::endl;
        return 1;
    }

    outFile << new_string;

    return 0;

}