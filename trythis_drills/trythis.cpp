// Test this program with a variety of values. Insert more tests until all errors are caught. 

#include <iostream>
#include <string>

using namespace std;

void error(string message){
    cerr << "Error:" << message << endl;
}

int area(int x, int y){
    if (x > 0 && y > 0){
        return x * y;
    } else {
        error("Please enter values greater than 0.");
        return 1;
    }
   
}

int framed_area(int x, int y){
    if (x > 2 && y > 2){
        return (x-1) * (y-1);
    } else {
        error("Please enter values greater than 2");
        return 1;
    }
}

struct Result {
    int area1;
    int area2;
    int area3;
    double ratio;

};

Result f(int x, int y, int z){
    Result result;
    result.area1 = area(x,y);
    result.area2 = framed_area(1,z);
    result.area3 = framed_area(y,z);
    result.ratio = double(result.area1)/result.area3;

    return result;
}

int main(){
    Result result = f(3,4,5);

    cout << "area1: " << result.area1 << endl;
    cout << "area2: " << result.area2 << endl;
    cout << "area3: " << result.area3 << endl;
    cout << "ratio: " << result.ratio << endl;

    return 0;
}