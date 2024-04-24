#include <iostream>
#include <cmath>

using std::cout;

struct Wheel
{
    float radius;
    int angle;
};

double getDistance(Wheel wheel);

int main(void)
{
    Wheel wheel = {4.5, 60};
    float distanceTraveledByWheel;

    distanceTraveledByWheel = getDistance(wheel);
    cout << "distanceTraveledByWheel = " << distanceTraveledByWheel << "\n";

    return 0;
}

double getDistance(Wheel wheel)
{
    return wheel.radius * 2 * M_PI * ((float)wheel.angle / 360);
}