#include <iostream>
#include <math.h>

using namespace std;

class Point
{
    double x, y;
public:
    double getx()
    {
        return x;
    }
    double gety()
    {
        return y;
    }
    Point(double first, double second)
    {
        x = first;
        y = second;
    }
    double length(Point b)
    {
        return sqrt((x - b.x) * (x - b.x) + (y - b.y) * (y - b.y));
    }
};

int main()
{
    Point one(3, 7);
    Point two(5, 1);
    cout << one.length(two) << endl;
}