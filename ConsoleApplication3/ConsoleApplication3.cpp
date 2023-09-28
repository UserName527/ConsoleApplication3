#include <iostream>
#include <iomanip>

float find_y(float x)
{
    return x + 0.2;
}

int main()
{
    std::cout << std::setprecision(18) << find_y(0.1);
}