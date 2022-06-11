// Instructions
// Given a year, report if it is a leap year.

// The tricky thing here is that a leap year in the Gregorian calendar occurs:

// on every year that is evenly divisible by 4
//   except every year that is evenly divisible by 100
//     unless the year is also evenly divisible by 400
// For example, 1997 is not a leap year, but 1996 is. 1900 is not a leap year, but 2000 is.

// Every year that is exactly divisible by four is a leap year, except for years that are exactly divisible by 100, but these centurial years are leap years if they are exactly divisible by 400. For example, the years 1700, 1800, and 1900 are not leap years, but the years 1600 and 2000 are.[14]

#include <iostream>

using namespace std;
// Test Data: 2024, 2028, 2032, 2036, 2040, 
int main() {
    cout << "===== Hello, Leap year =====" << endl;
    int year = 1700;
    bool isLeapYear = false;

    // Case 1: divisible by 4
    if ( year % 4 == 0) {

        // Case 2: divisible by 100
        if (year % 100 == 0) {

            // Case 3: divisible by 400
            if (year % 400 == 0) {
                isLeapYear = true;
            }
        } else {
            isLeapYear = true;
        }
    }

    cout << year << " isLeapYear: " << isLeapYear << endl;

    return 0;
}