#ifndef STRCONVS_H
#define STRCONVS_H

// Readers can ignore the implemnetations of to_string and stod
// but can use these functions in their code.

#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <string>
// we use sprintf from stdio to implement to_string
#include <cstdio>

inline
std::string to_string(int i)
{
    char buf[100];
    std::sprintf(buf, "%d", i);
    return buf;
}

inline
double stod(const std::string &s, std::size_t * = 0)
{
    char **buf = 0;
    return std::strtod(s.c_str(), buf);
}
#endif
