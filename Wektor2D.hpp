#include <iostream>
using namespace std;

class Wektor2D
{
public:
    Wektor2D() : mx(0.0), my(0.0) { cout << "d" << endl; }
    Wektor2D(double x, double y) : mx(x), my(y) { cout << "p" << endl; }
    Wektor2D(const Wektor2D& w) : mx(w.mx), my(w.my) { cout << "c" << endl; }

    double getX() const { return mx;}
    double getY() const { return my;}
    void   setX(double x) { mx = x; }
    void   setY(double y) { my = y; }

    void copy(const Wektor2D& w); 
    void print() { cout << mx << " " << my << endl; }
   
    Wektor2D operator+(const Wektor2D& w);

private:
    double mx;
    double my;

};

double operator*(const Wektor2D l, const Wektor2D p);
