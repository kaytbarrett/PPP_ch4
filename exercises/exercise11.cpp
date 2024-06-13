/*
    Write a program that writes out the first N values of the Fibonacci series, that is,
    the series that starts with 1 1 2 3 5 8 13 21 34. The next number in that series is 
    the sum of the two previous ones. Find the largest Fibonacci number that fits in an int.
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> v(int N)
{
    vector<int> v{1, 1};

    for (int i = 0; i < N - 2; i++)
    {
        int current = v[i] + v[i+1];
        v.push_back(current);
    }

    return v;
}

string displayNums(int N, vector<int> v)
{
    string displayNums;

    for (int i = 0; i < N; i++)
    {
        displayNums += to_string(v[i]) + " ";
    }

    return displayNums;
}

int main()
{
    int N = 0;
    cout << "Please enter a the number for the amount of values in the Fibonacci series you want: " << endl;
    cin >> N;
    vector<int> fib = v(N);

    cout << displayNums(N, fib) << endl;

    return 0;
}
