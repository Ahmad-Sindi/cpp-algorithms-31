// Algorithm Challenge
// 31 Program to calculate the 2nd, 3rd, and 4th powers of a number

#include <iostream>
#include <cmath> // For pow()
using namespace std;

int main()
{
    int num;

    // Ask the user to input a number
    cout << "Enter a number: ";
    cin >> num;

    // Calculate powers using pow() function
    int power2 = pow(num, 2); // num^2
    int power3 = pow(num, 3); // num^3
    int power4 = pow(num, 4); // num^4

    // Display the results
    cout << "Square (num^2): " << power2 << endl;
    cout << "Cube (num^3): " << power3 << endl;
    cout << "Fourth power (num^4): " << power4 << endl;

    return 0;
}
