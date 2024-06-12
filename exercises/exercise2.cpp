/*
    Exercise 2: The following program takes ina  temperature value in Celsius and converts it to Kelvin.
    This code has many errors in it. Find the errors, list them (Ill add a comment) and correct it.
    Exercise 3: Place a check on the program that will produce an error if a temp given is below -273.15K.
*/

#include <iostream>

using namespace std;

double ctok(double c)
{
    double k = c + 273.15;
    return k;
}

int main(){
    double c = 0;
    cout << "Please enter a temperature in Celsius: \n";
    cin >> c;
    if (c < -273.15)
    {
        cerr << "Error: Please enter a value greater than 0 degrees Kelvin (-273.15C).";
        return EXIT_FAILURE;
    }

    double k = ctok(c);
    cout << "This is " << k << " degrees Kelvin\n";
}