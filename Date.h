
#ifndef Vector_H
#define Vector_H

class Vector 
{
private:
    int x;
    int y;

public:
    Vector();
    Vector(int x, int y);
    void setVector(int x, int y);
    int getVector();
};

#endif