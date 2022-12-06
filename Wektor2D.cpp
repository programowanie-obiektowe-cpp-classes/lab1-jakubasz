#include "Wektor2D.hpp"

void Wektor2D::copy(const Wektor2D& w)
{
    this->mx = w.getX();
    this->my = w.getY();
}

Wektor2D Wektor2D::operator+(const Wektor2D& w)
{
    Wektor2D result(*this);
    result.mx += w.mx;
    result.my += w.my;
    return result;
}

double operator*(const Wektor2D l, const Wektor2D p)
{
    double result = l.getX() * p.getX();
    result += l.getY() * p.getY();
    return result;
}
