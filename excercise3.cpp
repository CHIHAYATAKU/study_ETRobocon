#include <iostream>
#include <cmath>

using std::cout;

struct Wheel
{
    double radius;
    int angle;
};

double getDistance2(struct Wheel *wheel);

int main(void)
{
    struct Wheel wheel = {4.5, 60};
    double DistanceTraveledByWheel;

    DistanceTraveledByWheel = getDistance2(&wheel);
    cout << "DistanceTraveledByWheel = " << DistanceTraveledByWheel << "\n";

    return 0;
}

double getDistance2(struct Wheel *wheel)
{
    return wheel->radius * 2 * M_PI * ((double)wheel->angle / 360);
}