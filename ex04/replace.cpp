#include "replace.hpp"

std::string replace (std::string content, std::string s1, std::string s2)
{
    size_t pos = 0;
    size_t found_pos = 0;
    std::string result;

    while (true)
    {
        found_pos = content.find(s1, pos);   //pos is the position from where to start
        //returns std::string::npos constant value if s1 is not found in content

        if (found_pos == std::string::npos)
        {
            result = result + content.substr(pos, found_pos - pos);
            break;
        }
        else
        {
            result = result + content.substr(pos, found_pos - pos);
            result = result + s2;
            pos = found_pos + s1.length();
        }
    }
    return result;
}