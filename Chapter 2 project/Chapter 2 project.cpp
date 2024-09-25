#include <iostream>
using namespace std;

int main() {
    const int totalCustomers = 16500;
    const double percentPurchase = 0.15;
    const double percentCitrus = 0.58;

    int customersPurchasing = totalCustomers * percentPurchase;
    int customersCitrus = customersPurchasing * percentCitrus;

    cout << "Customers purchasing energy drinks: " << customersPurchasing << endl;
    cout << "Customers preferring citrus-flavored drinks: " << customersCitrus << endl;

    return 0;
}
