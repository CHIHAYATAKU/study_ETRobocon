#include <iostream>
#include <cmath>

using std::cout;

struct Wheel
{
    double radius;
    int angle;
};

double getDistance2(Wheel *wheel);

int main(void)
{
    Wheel wheel = {4.5, 60};
    double distanceTraveledByWheel;

    distanceTraveledByWheel = getDistance2(&wheel);
    cout << "distanceTraveledByWheel = " << distanceTraveledByWheel << "\n";

    return 0;
}

double getDistance2(Wheel *wheel)
{
    return wheel->radius * 2 * M_PI * ((double)wheel->angle / 360.0);
}