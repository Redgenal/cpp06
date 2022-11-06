#include "Convertor.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Wrong arguments" << std:: endl;
        return 0;
    }
    strToChar(argv[1]);
    strToInt(argv[1]);
    strTofloat(argv[1]);
    strToDouble(argv[1]);
    return (0);
}