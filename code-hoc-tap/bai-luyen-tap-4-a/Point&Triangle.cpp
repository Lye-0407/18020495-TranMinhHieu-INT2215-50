// Cài đặt các hàm thành viên cho cấu trúc Point và lớp Triangle 

#include <iostream>
#include <cmath>

using namespace std;

struct Point
{
    double x, y;

    Point(): x(0), y(0) {}

    Point(double x, double y): x(x), y(y) {}

    Point(const Point& p): x(p.x) , y(p.y) {}
};

class Triangle
{   
    Point p1, p2, p3;

public:
    Triangle(const Point& a, const Point& b, const Point& c): p1(a), p2(b), p3(c) {}
    
    double distance(const Point& a, const Point& b) const
    {
        return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
    }
    
    double getPerimeter() const
    {
        return distance(p1, p2) + distance(p2, p3) + distance(p3, p1);
    }

    double getArea() const
    {
        double a = distance(p1, p2);
        double b = distance(p2, p3);
        double c = distance(p3, p1);
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
};

