/*
    Exercise 2: The following program takes ina  temperature value in Celsius and converts it to Kelvin.
    This code has many errors in it. Find the errors, list them (Ill add a comment) and correct it.
    Exercise 3: Place a check on the program that will produce an error if a temp given is below -273.15K.
    Exercise 4: Do exercise 3 again, but this time handle the error inside ctok().
    Exercise 5: Add to the program so that it can also convert from Kelvin to Celsius.
*/

#include <iostream>

using namespace std;

double ctok(double c)
{
    double k = c + 273.15;
    if (k < 0){
        cerr << "Error: Please enter a value greater than 0 degrees Kelvin (-273.15C).\n";
        exit(EXIT_FAILURE);
    }
    return k;
}

double ktoc(double k)
{
    if (k < 0){
        cerr << "Error: Please enter a value greater than 0 degrees Kelvin (-273.15C).\n";
        exit(EXIT_FAILURE);
    }
    double c = k - 273.15;
    return c;
}

int main(){
    double temp = 0;
    char unit;
    cout << "Please enter a temperature followed by a unit (C, K). Please use a space after temperature (ex: 23 C): \n";
    cin >> temp >> unit;

    double convertedTemp;

    switch(unit)
    {
        case 'C':
            convertedTemp = ctok(temp);
            cout << "This is " << convertedTemp << " degrees Kelvin\n";
            break;
        case 'K':
            convertedTemp = ktoc(temp);
            cout << "This is " << convertedTemp << " degrees Celsius\n";
            break;
        default:
            cerr << "Error: Invalid input." << endl;
            break;
    }
    
}