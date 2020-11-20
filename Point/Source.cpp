#include <iostream>
#include <cmath>
class Point
{
    double m_a;
    double m_b;
public:
    Point(double a = 0.0, double b = 0.0) : m_a(a),  m_b(b)
    {
    }
    void print() const
    {
        std::cout << "Point(" << m_a << ", " << m_b << ")\n";
    }
    float distanceTo(const Point &point) const
    {
        return  sqrt((point.m_a - m_a) * (point.m_a - m_a) + (point.m_b - m_b) * (point.m_b - m_b));
    }
};
int main()
{
    Point first;
    Point second(2.0, 5.0);
    first.print();
    second.print();
    std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';
    return 0;
}