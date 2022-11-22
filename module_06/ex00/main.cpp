#include "Conversion.hpp"

int main(int ac, char **av)
{
    std::string input;
    if (ac != 2)
    {
        std::cout << RED "Error: input muste be : ./ConversionScalaire [int OR char OR float OR double]" CLEAR << std::endl;
        return(0);
    }
    Conversion convertion;
    convertion.convert(av[1]);
    return(0);
}
