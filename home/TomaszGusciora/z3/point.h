#ifndef __POINT_H__
#define __POINT_H__

#include<iostream>
#include<math.h>
using namespace std;

class Point
{
    double x, y;

public:
    Point();
    Point(double, double);

    ~Point();

    void setX(double);
    void setY(double);

    double getX();
    double getY();

    friend istream& operator>>(istream&, Point&);
};

ostream& operator<<(ostream &, Point);
istream& operator>>(istream &, Point&);

#endif
