#include <iostream>
using namespace std;

int main() {
    const double tankSize = 20.0; // gallons
    const double townMpg = 23.5;
    const double highwayMpg = 28.9;

    double townDistance = tankSize * townMpg;
    double highwayDistance = tankSize * highwayMpg;

    cout << "Distance in town: " << townDistance << " miles" << endl;
    cout << "Distance on highway: " << highwayDistance << " miles" << endl;

    return 0;
}