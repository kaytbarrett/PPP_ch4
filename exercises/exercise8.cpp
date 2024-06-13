/*
    Write a program that reads and stores a series of integers and then computes the sum of 
    the first N integers. First ask for N, then read the values into a vector, then calculate
    the sum of the first N values. 
    For example: 
        Please enter the number of values you want to sum: 3
        Please enter some integers(press '|' to stop): 12 23 12 24 15 |
        The sum of the first 3 numbers ( 12 23 12 ) is 48
*/

#include <iostream>
#include <vector>

using namespace std;

int sumIntegers(int N, vector<int> v)
{
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        sum += v[i];
    }

    return sum;
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

int main ()
{

    int N = 0;
    int num = 0;
    vector<int> v;

    cout << "Please enter the number of values you want to sum:" << endl;
    cin >> N;

    cout << "Please enter some integers (press \'|\' to stop): " << endl;
    while (cin >> num)
    {
        v.push_back(num);
    }

    int findSum = sumIntegers(N, v);

    cout << "The sum of the first " << N << " numbers ( " << displayNums(N, v) << ") is " << findSum << endl; 

    return 0;
}