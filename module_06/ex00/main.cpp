#include "Conversion.hpp"

int main(int ac, char **av)
{

    if (ac != 2)
    {
        std::cout << RED "Error: input muste be : ./ConversionScalaire [int OR char OR float OR double]" CLEAR << std::endl;
        return(0);
    }
    std::string input = av[1];
    Conversion convertion;

    if (!input.compare("+inf") or !input.compare("-inf"))
    {
        convertion.convertDouble(input);
        return (0);
    }
    if (!input.compare("+inff") or !input.compare("-inff"))
    {
        convertion.convertFloat(input);
        return (0);
    }
    else
        convertion.convert(input);
    return(0);
}
