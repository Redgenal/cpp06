#ifndef DATA_H
#define DATA_H

#include <iostream>

typedef struct s_Data
{
    char    c;
    int     i;
    float   f;
    double  d;
    std::string s;
}   Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif