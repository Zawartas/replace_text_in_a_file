#include <fstream>
#include <string>
#include <regex>

int main(int argc, char* argv[])
{
    std::ifstream input(argv[3]);
    std::ofstream output(argv[4]);

    std::regex pattern(argv[1]);

    std::string line;
    while (std::getline(input, line))
        {output << regex_replace( line, pattern, argv[2]) << std::endl;}

    output.close();
    input.close();
    return 0;
}
