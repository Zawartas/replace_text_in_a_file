#include <fstream>
#include <string>

int main(int argc, char* argv[])
{
    std::ifstream input(argv[3]);
    std::ofstream output(argv[4]);
    std::string line, previous = argv[1], next = argv[2];
    while (std::getline(input, line))
    {
        for (int index = 0;
                (index = line.find(previous, index)) != std::string::npos;
                index += next.size())
        {
            line.replace(index, previous.size(), next);
        }
        output << line << std::endl;
    }
    output.close();
    input.close();
    return 0;
}
