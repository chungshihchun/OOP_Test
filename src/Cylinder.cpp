# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
# include<iostream>
# include<iomanip>
using namespace std;
const double pi = 3.14159265358979323846264338327950288419716939937510;
double Cylinder :: SurfaceArea(){
    double n = 2*pi*radius*height + 2*pi*radius*radius;
    return n;
}

double Cylinder :: Volume(){
    double n = pi*radius*radius*height;
    return n;
}

double Cylinder :: Circumference(){
    double n = 2*pi*radius;
    return n;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << "Circumference: " << fixed << setprecision(3) << cldr.Circumference() << endl;
    out << "SurfaceArea: " << fixed << setprecision(3) <<  cldr.SurfaceArea() << endl;
    out << "Volume: " << fixed << setprecision(3) <<  cldr.Volume() << endl;
    return out;
}

# endif
