/*
    The following program takes ina  temperature value in Celsius and converts it to Kelvin.
    This code has many errors in it. Find the errors, list them (Ill add a comment) and correct it.
*/

#include <iostream>

using namespace std;

double ctok(double c)
{
    // Error: int changed to double
    // Error: 273.25 changed to 273.15
    double k = c + 273.15;

    // Error: int changed to k
    return k;
}

int main(){
    double c = 0;
    // Error: d changed to c
    cin >> c;
    // Error: "c" changed to c
    double k = ctok(c);

    // Error: Cout changed to cout 
    // Error: '/n' changed to '\n'
    cout << k << '\n';
}