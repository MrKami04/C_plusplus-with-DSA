#include <iostream>
using namespace std;


int main () {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
// first program of cpp:
    cout << "hello world!" <<endl;

    // create variable

    string myName = "python";
    int num1 = 223;
    cout<< myName << endl;
    cout<< num1 << endl;

    // multiple variable 
    int x, y, z;
    x = y = z = 23;
    cout<< x + y + z << endl;

    // const variable
    const int minutesPerHour = 60;
    cout << minutesPerHour << endl;


    return 0;
}

