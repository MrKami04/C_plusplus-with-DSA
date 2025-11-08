#include <iostream>
using namespace std;

int main(){
// 01:square pattern(easy with numbers = n=4)
int n = 4 ;
// cout<<"enter the pattern number:";
// cin>>n;

for (int i=0; i <=n-1; i++){//outer loop
    for (int j=0; j<=n-1; j++){//inner loop
        cout<<"*"<<" ";// write anything here (place if star '*') you want to print.
        
    }
    cout<<endl;
}
cout<<"--------------------"<<endl;

 for (int i=0; i<n; i++){//outer loop
    char ch = 'A';
    for (int j=0; j<n; j++){//inner loop
        
        cout<<ch;
        ch = ch + 1; // char + int = 65+1 = 66
    }
    cout<<endl;
 }

 cout<<"------------------"<<endl;

//  02: pattern question.
    int m = 5;
    int num = 1;

        for (int i=0; i<m; i++){//outer-loop
            for (int j=0; j<m; j++){//inner-loop
                cout<<num<<" ";
                num++;    
            }
            cout<<endl;
        }
cout<<"after pattern : "<< num<<endl;//10
cout<<"--------------------"<<endl;
    char ch1 = 'A';
        for (int i=0; i<m; i++){//outer-loop
        
            for (int j=0; j<m; j++){//inner-loop
                cout<<ch1<<" ";
               ch1++;
              

            }
            cout<<endl;
        }
cout<<"--------------------"<<endl;

// 03:Triangle pattern
int p = 4;

for (int i=0; i<p; i++){//outer-loop
    for (int j=0; j<i+1; j++){//inner-loop
        cout<<"*"<<" ";

    }
    cout<<endl;
}
cout<<"--------------------"<<endl;
    for (int i=0; i<p; i++){//outer-loop

        for (int j=0; j<i+1; j++){//inner-loop
            cout<< (i+1) <<" ";    
    }
    cout << endl;
   
}

 cout<<"--------------------"<<endl;
   char ch2 = 'A';
      for (int i=0; i<p; i++){
       
      
        for (int j=0; j<i+1; j++){ 
        
            cout<< char (ch2+i) << " ";
        }
        cout<<endl;
      }
cout<<"--------------------"<<endl;
// same output but lightly different method
    char ch3 = 'A';
    int rows = 4; // you can change the number of rows

    for (int i = 0; i <= rows; i++) {
        for (int j = 0; j <= i; j++) {
            cout << ch3 <<" ";
        }
        cout << endl;
        ch3++;
    }

cout<<"--------------------"<<endl;
    int q = 4;

    for (int i=0; i<q; i++){

        for (int j=1; j<=i+1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

cout<<"--------------------"<<endl;
// 04: reverse loop(backward-loop)
    int r = 4;
    for (int i=r; i>0; i--){
        cout<<i<< " ";
}
cout<<endl;
cout<<"----------------------------"<<endl;
// 05: reverse triangle pattern
    for (int i=0; i<r; i++){

        for (int j=i+1; j>0; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
cout<<"--------------------"<<endl;
// 06: Floyd's Triangle pattern
int s = 4;
int num1 = 1; 
      
    for (int i=0; i<s; i++){

        for (int j=0; j<i+1; j++){

            cout<<num1<<" ";
            num1++;
        }
        cout<<endl;
    }

cout<<"--------------------"<<endl;
// 07: Inverted Triangle pattern

int t = 4;

for (int i=0; i<t; i++){

    for (int j=0; j<i; j++){
        cout<<" ";
    }
    for (int j=0; j<t-i; j++){
        cout<<(i+1);
    }
    cout<<endl;

}
cout<<"--------------------"<<endl;
// 08: Pyriamid pattern

int u = 8;

    for (int i=0; i<u; i++){
// spaces
        for (int j=0; j<u-i-1; j++){
            cout<<" ";
        }
        // num1
        for (int j=1; j<=i+1; j++){
            cout<<j;
        }
        // num2
        for (int j=i; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
    }

cout<<"--------------------"<<endl;
// 09: Hollow Diamond Pattern

int v = 4;
// top 
for (int i=0; i<v; i++) {
    // spaces
    for (int j=0; j<v-i-1; j++){
        cout<<" ";

    }
    cout<<"*";

    if (i != 0){
        // spaces
        for (int j=0; j<2*i-1; j++){
            cout<<" ";
        }

        cout<<"*";

    }
    cout<<endl;
}

// bottom

for (int i=0; i<v-1; i++){

    // spaces
    for (int j=0; j<i+1; j++){
        cout<<" ";

    }
    
    cout<< "*";

    if (i != v-2){
        // spaces
         for (int j=0; j<2*(v-i)-5; j++){
            cout<<" ";
        }

        cout<<"*";

       
    }
    cout<<endl;
}

return 0;
}
