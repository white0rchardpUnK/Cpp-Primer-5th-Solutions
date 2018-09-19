#include <iostream>


int main()
{
    const double a = 3.14;
    const double b = 3.11;

    const double *const fuck_it = &a;

    const double *screw_it = &a;

    double x = *fuck_it;

    double y = *screw_it;

    return 0;
}
