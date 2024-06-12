// Drill contains 25 steps. Each step is a line of code that contains an error, find the error and fix it.
// When all errors are found for each step, the output will show success. 
// Another part of this drill is to see how your compiler reacts to various errors. 
// This drill does not show a lot of code because it is just testing out errors and finding simple mistakes
// and I am not pushing 25 times for each line of the drill.  

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    try
    {
        int i = 0;
        int j = 9;
        while (i < 10)
        {
            i++;
        }
        if (j < i){
            cout << "Success!\n";
        }

        return 0;
    }
    catch(exception& e)
    {
        cerr << e.what() << '\n';
        return 1;
    }
    catch(...)
    {
        cerr << "Oops: uknown exception" << std::endl;
        return 2;
    }
    
}