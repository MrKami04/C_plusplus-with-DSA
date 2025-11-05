// The main difference between C and C++ is that C++ supports classes and objects, while C does not.
#include <iostream>
#include <string>
#include <cmath>
using  namespace std;

int main() {

    //  #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif


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
    // arithmetic operators (+, -, *, /, %, ++, --)
    int A = 15, B = 4;
    cout << "A + B = " << A + B << endl;
    cout << "A - B = " << A - B << endl;
    cout << "A * B = " << A * B << endl;
    cout << "A / B = " << A / B << endl;
    cout << "A % B = " << A % B << endl;
    cout << "++A = " << ++A << endl;
    cout << "--B = " << --B << endl;

    // assignment operators (=, +=, -=, *=, /=, %=)
    int C = 10;
    C += 5;  // C = C + 5
    cout << "C = " << C << endl;

    // comparison operators (==, !=, >, <, >=, <=)
    int D = 20, E = 15;
    cout << "D == E: " << (D == E) << endl;
    cout << "D != E: " << (D != E) << endl;
    cout << "D > E: " << (D > E) << endl;
    cout << "D < E: " << (D < E) << endl;
    cout << "D >= E: " << (D >= E) << endl;
    cout << "D <= E: " << (D <= E) << endl;

    // logical operators (&&, ||, !)
    bool X = true, Y = false;
    cout << "(X && Y): " << (X && Y) << endl;
    cout << "(X || Y): " << (X || Y) << endl;
    cout << "(!X): " << (!X) << endl;

    // precedence of operators
    int result = 10 + 5 * 2; // multiplication has higher precedence than addition
    cout << "Result: " << result << endl;


    // string concatenation
    string str1 = "Hello, ";
    string str2 = "World!";
    string resultStr = str1 + str2;
    cout << "Concatenated String: " << resultStr << endl;
    // append()
    str1.append("C++ is fun.");
    cout << "Appended String: " << str1 << endl;
    // number and string concatenation
    int number = 2024;
    string yearStr = "Year: " + to_string(number);
    cout << yearStr << endl;
    // length()
    cout << "Length of resultStr: " << resultStr.length() << endl;      
    // size()
    cout << "Size of resultStr: " << resultStr.size() << endl;
    // accessing string characters
    cout << "First character of resultStr: " << resultStr[0] << endl;
    cout << "Third character of resultStr: " << resultStr.at(2) << endl;
    // change string character
    resultStr[7] = 'w';
    cout << "Modified String: " << resultStr << endl;
    // special characters in strings
    string specialStr = "Line1\nLine2\tTabbed\\Backslash\"DoubleQuote\'SingleQuote";
    cout << "Special Characters String: " << specialStr << endl;
    // user input for string
    string firstName;
    cout << "Type your first name: ";
    cin >> firstName; // get user input from the keyboard
    cout << "Your name is: " << firstName << endl;

// getline() to read full line including spaces
    string fullName;
    cout << "Type your full name: ";
    cin.ignore(); // clear the input buffer
    getline(cin, fullName);
    cout << "Your name is: " << fullName << endl;
    // C-style string
    string greeting1 = "hello";
    char greeting2[] = "hello";
    cout << "C-style String: " << greeting2 << endl;

    // math
    // maximum and minimum
    int maxVal = max(10, 20);
    int minVal = min(10, 20);
    cout << "Maximum Value: " << maxVal << endl;
    cout << "Minimum Value: " << minVal << endl;
    // sqrt, pow, round, ceil, floor, log
    cout<<"Square Root of 16: " << sqrt(16) << endl;
    cout<<"2 raised to the power 3: " << pow(2, 3);
    cout<<"Round 4.6: " << round(4.6) << endl;
    cout<<"Ceil 4.2: " << ceil(4.2) << endl;
    cout<<"Floor 4.8: " << floor(4.8) << endl;
    cout<<"Logarithm of 10: " << log(10) << endl;

    // boolean values
    bool isTrue = true;
    bool isFalse = false;
    cout << "isTrue: " << isTrue << endl;
    cout << "isFalse: " << isFalse << endl;
    cout<<"------------------------------"<<endl;
    // boolalpha
    cout << boolalpha; // to print boolean values as true/false
    cout << "isTrue: " << isTrue << endl;
    cout << "isFalse: " << isFalse << endl;
    cout<<"------------------------------"<<endl;
    // Resetting Back With noboolalpha
    cout << noboolalpha;
    cout << "isTrue: " << isTrue << endl;
    cout << "isFalse: " << isFalse << endl;

    cout<<"------------------------------"<<endl;
    // boolean expressions
    int val1 = 10, val2 = 20;
    cout << "val1 == val2: " << (val1 == val2) << endl;
    cout << "val1 != val2: " << (val1 != val2) << endl;
    cout << "val1 > val2: " << (val1 > val2) << endl;
    // start if-else

    return 0;
}