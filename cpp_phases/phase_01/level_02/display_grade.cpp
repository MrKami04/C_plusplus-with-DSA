// 3. Take marks (0–100) and print the corresponding grade (A/B/C/D/F). 

#include <iostream>
using namespace std;

int main(){

    int marks;

    cout << "Entre your marks: ";
    cin >> marks;

    if (marks >= 90){
        cout << "Your grade is A" <<endl;
    }
    else if ((marks >= 80) && (marks <= 89)){
        cout << "Your grade is B" <<endl;
    }
    else if ((marks >= 70) && (marks <= 79)){
        cout << "Your grade is C" <<endl;
    }
    else if ((marks >= 60) && (marks <= 69)){
        cout << "Your grade is D" <<endl;
    }
    else{
        cout << "Your grade is F" <<endl;
    }
    return 0;
}