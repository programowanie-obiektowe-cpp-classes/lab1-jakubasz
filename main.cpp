#include <iostream>
#include "Wektor2D.hpp"

using namespace std;



int main()
{
    cout << "Hello!!" << endl;

    Wektor2D w(2,4);
    Wektor2D w1(4,5); 
    Wektor2D w2;

    w2.print();
    Wektor2D a = w2 + w;
    double   b = w2 * w;
    a.print();
    cout << b << endl;
} 
