#include "Convertor.hpp"

void    strToInt(std::string argv) {
    int rez;
    try {
        std::cout << "Int: ";
        rez = static_cast<int>(std::stoi(argv));
        std::cout << rez;
    }
    catch (const std::exception& e) {
        std::cout << "impossible";
    }
    std::cout<<std::endl;
    return;
}

void    strToChar(std::string argv) {
    int rez;
    char c;
    try {
        std::cout << "Char: ";
        rez = static_cast<int>(std::stoi(argv));
        if(isprint(rez) == false)
        {
            std::cout << "Non displayable" << std::endl;
            return;
        }
        c = static_cast<char>(rez);
        std::cout << c;
    }
    catch(const std::exception& e) {
        std::cout << "impossible";
    }
    std::cout << std::endl;
}

void    strToDouble(std::string argv) {
    double rez;
    try {
        std::cout << "Double: ";
        rez = static_cast<double>(std::stod(argv));
        std::cout << rez;
        if (rez - static_cast<int>(std::stod(argv)) == 0)
            std::cout << ".0";
    }
    catch (const std::exception &e) {
        std::cout << "inposible";
    }
    std::cout << std::endl;
}

void    strTofloat(std::string argv) {
    float rez;
    try {
        std::cout << "Float: ";
        rez = static_cast<float>(std::stof(argv));
        std::cout << rez;
        if (rez - static_cast<int>(std::stod(argv)) == 0)
            std::cout << ".0";
        std::cout << "f";
    }
    catch (const std::exception &e) {
        std::cout << "inposible";
    }
    std::cout << std::endl;
}