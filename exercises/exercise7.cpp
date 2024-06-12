/*
    Going back to the quadratic formula exercise of last chapter, we see that an issue arises if
    b^2 - 4ac is less than zero (because of the sqaure root part of the equation). Create a function
    that prints out the roots of a quadratic equation given a, b, c. When the program detects an 
    equation with no real roots, have it print out a message. How do you know the results are plausible?
    Can you check that they are correct?
*/

#include <iostream>

using namespace std;

int calculateRoot(int a, int b, int c)
{
    int root = (b * b) - (4 * a * c);
    if (root <= 0){
        cerr << "Error: not a real root." << endl;
        exit(EXIT_FAILURE);
    }
    return root;
}

int main(){

    int a = 0;
    int b = 0;
    int c = 0;
    cout << "Please enter the a, b, and c of a quadratic equation (ex: 1 -5 6): " << endl;
    cin >> a >> b >> c;

    int findRoot = calculateRoot(a, b, c);
    cout << findRoot << endl;
}