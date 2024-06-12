/*
    Write a program that converts from Celsius to Farenheit and from Farenheit to Celsius.
*/

#include <iostream>

using namespace std;

double ctof(double c)
{
    if (c < -273.15){
        cerr << "Error: Please enter a value greater than -273.15C or -459.67F.\n";
        exit(EXIT_FAILURE);
    }
    double f = (c * 9/5) + 32;
   
    return f;
}

double ftoc(double f)
{
    double c = (f - 32) * (5/9);
    if (c < -273.15){
        cerr << "Error: Please enter a value greater than -273.15C or -459.67F.\n";
        exit(EXIT_FAILURE);
    }
    return c;
}

int main(){
    double temp = 0;
    char unit;
    cout << "Please enter a temperature followed by a unit (C, F). Please use a space after temperature (ex: 23 C): \n";
    cin >> temp >> unit;

    double convertedTemp;

    switch(unit)
    {
        case 'C':
            convertedTemp = ctof(temp);
            cout << "This is " << convertedTemp << " degrees Fahrenheit\n";
            break;
        case 'F':
            convertedTemp = ftoc(temp);
            cout << "This is " << convertedTemp << " degrees Celsius\n";
            break;
        default:
            cerr << "Error: Invalid input." << endl;
            break;
    }
    
}