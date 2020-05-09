#include "Date.h"
#include <iostream>

#include <cstdlib>
using namespace std;



Vector::Vector()
{
    x = 0;
    y = 1;
}

Vector::Vector(int x, int y)
{
    this->x = x;
    this->y = y;
}

void Vector::setVector(int x, int y)
{
    this->x = x;
    this->y = y;
    cout << "settt";
}

int Vector::getVector()
{
    return 5;
}
