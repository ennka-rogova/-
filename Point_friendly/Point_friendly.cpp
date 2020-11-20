#include <iostream>
#include <cmath>
class Point
{
    double m_a;
    double m_b;
public:
    Point(double a = 0.0, double b = 0.0) : m_a(a), m_b(b)
    {
    }
    void print() const
    {
        std::cout << "Point(" << m_a << ", " << m_b << ")\n";
    }
    friend float distanceTo(const Point& a, const Point& b);
};
float distanceTo(const Point& a, const Point& b)
{
    return  sqrt((a.m_a - b.m_a) * (a.m_a - b.m_a) + (a.m_b - b.m_b) * (a.m_b - b.m_b));
}
int main()
{
    Point first;
    Point second(2.0, 5.0);
    first.print();
    second.print();
    std::cout << "Distance between two points: " << distanceTo(first,second) << '\n';
    return 0;
}