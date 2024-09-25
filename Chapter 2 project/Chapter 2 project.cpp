#include <iostream>
using namespace std;

int main() {
    const double risingRate = 1.5; 
    int years[] = { 5, 7, 10 };

    for (int year : years) {
        double increase = risingRate * year;
        cout << "In " << year << " years, the ocean level will rise by " << increase << " millimeters." << endl;
    }

    return 0;
}
