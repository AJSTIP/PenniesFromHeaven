#include <iostream>
using namespace std;

struct Denomination {
    const int cents;
    const char *description;
};

const Denomination DENOMINATIONS[] = {
    { 10000, "Hundred-Dollar Bills" },
    {  5000, "Fifty-Dollar Bills" },
    {  2000, "Twenty-Dollar Bills" },
    {  1000, "Ten-Dollar Bills" },
    {   500, "Five-Dollar Bills" },
    {   100, "One-Dollar Bills" },
    {    25, "Quarters" },
    {    10, "Dimes" },
    {     5, "Nickels" },
    {     1, "Pennies" }
};

int main() {
    double totalAmount;
    cout << "Please enter the amount to convert: $";
    cin >> totalAmount;
    

    int cents = 100 * totalAmount;
    for (int i = 0; i < sizeof(DENOMINATIONS) / sizeof(DENOMINATIONS[0]); ++i) {
        cout <<endl<< "Number of " << DENOMINATIONS[i].description
                  << ": " << (cents / DENOMINATIONS[i].cents) << '\n';
        cents %= DENOMINATIONS[i].cents;
    }
}