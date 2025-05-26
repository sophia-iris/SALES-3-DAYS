#include <iostream>
using namespace std;

int main() {
    float day1, day2, day3, totalsales, averagespd;
    float days = 3;  // fixed missing semicolon

    cout << "Day 1 Sales: ";
    cin >> day1;
    cout << "Day 2 Sales: ";
    cin >> day2;
    cout << "Day 3 Sales: ";
    cin >> day3;

    totalsales = day1 + day2 + day3;
    averagespd = totalsales / days;

    cout << "Total Sales: " << totalsales << endl;  // fixed variable name
    cout << "Average Sales per Day: " << averagespd << endl;

    return 0;
}
