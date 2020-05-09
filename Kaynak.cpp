#include<iostream>
#include "Date.h"

using namespace std;

int main() {

    Vector vec(3,4);
    
    vec.setVector(5, 7);

    cout << vec.getVector();
    
    return 0;
}