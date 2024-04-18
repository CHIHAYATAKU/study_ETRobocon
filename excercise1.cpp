#include <iostream>

using std::cout;

struct Wheel
{
    double radius;
    int angle;
};

int main(void)
{
    struct Wheel wheel = {4.5, 60};

    cout << "radius = " << wheel.radius << "\n";
    cout << "angle = " << wheel.angle << "\n";

    return 0;
}