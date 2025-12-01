// 9. Take a character and check if it’s a vowel or consonant. 
// 10. Take a character and check whether it’s uppercase, lowercase, a digit, or a special character. 

#include <iostream>
using namespace std;

int main(){
    char ch = 't';

    // method one
    {
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
        ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        cout << "Yes, Character is vowel." <<endl;
    }
    else{
        cout << "No, Character isn't vowel." <<endl;
    }
}

// method two:
{

     string vowel = "aeiouAEIOU";

    if (vowel.find(ch) != string::npos) {
        cout << "Yes, Character is vowel." << endl;
    } else {
        cout << "No, Character isn't vowel." << endl;
    }

}

// method three
{

    switch(ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            cout << "Yes, Character is vowel." << endl;
            break;
        default:
            cout << "No, Character isn't vowel." << endl;
    }
}



// question 10:


    char cha;
    cout << "Enter a character: ";
    cin >> cha;

    if (cha >= 'A' && cha <= 'Z') {
        cout << "Uppercase letter";
    }
    else if (cha >= 'a' && cha <= 'z') {
        cout << "Lowercase letter";
    }
    else if (cha >= '0' && cha <= '9') {
        cout << "Digit";
    }
    else {
        cout << "Special character";
    }


    return 0;
}