#include "Data.hpp"


uintptr_t serialize(Data* ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
    return (reinterpret_cast<Data *>(raw));
}

int main () {
    Data* data = new Data();
    Data* rez;
    uintptr_t semi;

    data->c = 's';
    data->i = 21;
    data->f = 2.1f;
    data->d = 2.1;
    data->s = "twenty one";
    semi = serialize(data);
    rez = deserialize(semi);

    std::cout << "Data " << data << std::endl;
    std::cout << "Sizeof Data " << sizeof(data) << std::endl;
    std::cout << "C " << data->c << std::endl;
    std::cout << "I " << data->i << std::endl;
    std::cout << "F " << data->f << std::endl;
    std::cout << "D " << data->d << std::endl;
    std::cout << "S " << data->s << std::endl << std::endl;
    
    std::cout << "Semi " << semi << std::endl;
    std::cout << "Sizeof Semi " << sizeof(semi) << std::endl << std::endl;

    std::cout << "Rez " << rez << std::endl;
    std::cout << "Sizeof Rez " << sizeof(rez) << std::endl;
    std::cout << "C " << rez->c << std::endl;
    std::cout << "I " << rez->i << std::endl;
    std::cout << "F " << rez->f << std::endl;
    std::cout << "D " << rez->d << std::endl;
    std::cout << "S " << rez->s << std::endl;

    delete data;
    return (0);
}