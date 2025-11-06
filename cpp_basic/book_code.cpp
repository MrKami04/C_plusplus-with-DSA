#include<iostream>
using namespace std;


    int main(){  
    char ch1, ch2, sum;
    ch1 = 'A';
    ch2 = 'B';
    cout<<"charactor are:"<<ch1<<ch2;


    // concept of overflow and underflow
    short testvar = 32767;
    cout<<"\nshort variable value:"<<testvar;
    testvar = testvar + 1;
    cout<<"\nshort variable value after overflow:"<<testvar;
    testvar = testvar - 1;
    cout<<"\nshort variable value after underflow:"<<testvar;
  

   /*Write a program that takes the radius of a circle as input,
    calculates the circumference using the formula:(2*pi*R),
     and displays the result, where the value of "pi" is stored
      in a constant using the `DEFINE` directive.*/

    #define PI 3.14
    float radius, circumference;
    cout<<"Enter the radius of the circle:";
    cin>>radius;
    circumference = 2 * PI * radius;
    cout<<"Circumference of the circle is:"<<circumference;


    /*Write a program that explains the difference between the postfix increment
     operator and the prefix increment operator when they are used as independent
      expressions.*/
    int a = 5, b = 5;
    cout << "Postfix increment:" << a++ << endl;
    cout << "Value of a after postfix increment:" << a << endl;

    cout << "Prefix increment:" << ++b << endl;
    cout << "Value of b after prefix increment:" << b << endl;


    /*Write a program that solves the following expression: `a * b / (-6731 % 13) * d`.*/
    int a1 = 10, b1 = 20, d1 = 12;
    int result = a1 * b1 / (-6731 % 13) * d1;
    cout << "Result of the expression a * b / (-6731 % 13) * d is: " << result << endl;

    /*Write a program that divides two float variables and finds 
    the remainder by using explicit casting.*/
    float var1 = 5.9f, var2 = 2.3f;
    int c = int(var1) % int(var2);
    cout << "Remainder after dividing: " << c << endl;

    /*Write a program that displays the sizes of different data types.*/
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
// 91
    return 0;
}
