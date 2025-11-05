// The main difference between C and C++ is that C++ supports classes and objects, while C does not.
#include <iostream>
#include <string>
using  namespace std;

int main() {

     #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif


    cout<<"Hello World!"<<endl;
    cout<<"Have a nice day!"<<endl;
    cout<< 45<<endl;
    cout<<23.11<<endl;
    cout<<'A'<<endl;
    cout<<2 + 44<<endl;
    cout<<33 * 2 <<endl;

    // new line added by add \n (Both \n and endl are used to break lines.
    //  However, \n is most used.)
    cout<<"i am learning C++ language.\n";
    cout<<"I will practice more to improve.\n";
    cout<<"hi c++"<<"\n";
    cout<<"c++ is fun";
    cout<<"my name is abc"<<"\n\n"; //for blank line
    cout<<"this is c++ programming";
    cout<<"I am enjoying learning C++."<<endl;
    cout<<"enjoying c++ programming"<<endl;

    // variables in C++
    int mynum = 45;
    mynum = 30; //overwriting the value of mynum
    cout<<"The value of mynum is: "<<mynum<<endl;
    // 
    int num1;
    num1 = 23;
    cout<<"The value of num1 is: "<<num1<<endl;
    //
    string name = "John";
    int age = 25;
    cout<<"My name is "<<name<<" and I am "<<age<<" years old."<<endl;
    // age variable is used to store the age of a person
    double pi = 3.14;
    cout<<"The value of pi is: "<<pi<<endl;
     // 
    char grade = 'A';
    cout<<"My grade is: "<<grade<<endl;
    //
    bool isCodingFun = true;
    cout<<"Is coding fun? "<<isCodingFun<<endl;

    int x = 10;
    int y = 20;
    int sum = x + y;
    cout<<"The sum of "<<x<<" and "<<y<<" is: "<<sum<<endl;

    // multiple varables
    int a = 5, b = 10, c = 15;
    cout<<a+b+c<<endl;
    // one value to multiple variables
    int p, q, r;
    p = q = r = 50;
    cout<<p+q+r<<endl;

    // Identifiers in C++(unique name of variable called identifier)
    int studentAge = 20;
    cout<<"Student age is: "<<studentAge<<endl;

    // contsants in C++
    const double gravity = 9.8;
    cout<<"The value of gravity is: "<<gravity<<endl;

    // input in C++
    int userAge;
    cout<<"Enter your age: ";
    cin>>userAge;
    cout<<"Your age is: "<<userAge<<endl;

    // Data Types in C++
    int intVar = 100;
    float floatVar = 10.5;
    double doubleVar = 20.99;
    char charVar = 'C';
    char a1 = 67; // ASCII value of 'C' is 67
    bool boolVar = false;
    double d1 = 34e23; // scientific notation
    string language = "C++ (cplusplus)";

    cout<<"Integer Value: "<<intVar<<endl;
    cout<<"Float Value: "<<floatVar<<endl;
    cout<<"Double Value: "<<doubleVar<<endl;
    cout<<"Character Value: "<<charVar<<endl;
    cout<<"Character Value from ASCII: "<<a1<<endl;
    cout<<"Boolean Value: "<<boolVar<<endl;
    cout<<"Scientific Notation Value: "<<d1<<endl;
    cout << "I am learning " << language << " programming language." << endl;
// auto keyword in C++
    auto var1 = 42;          // int
    auto var2 = 3.14;       // double
    cout << "var1: " << var1 << ", var2: " << var2 << endl;

    // start operators
    return 0;
}