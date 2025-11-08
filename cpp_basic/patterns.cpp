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
    char ch = 'A';
        for (int i=0; i<m; i++){//outer-loop
        
            for (int j=0; j<m; j++){//inner-loop
                cout<<ch<<" ";
               ch++;
              

            }cout<<endl;
        }



return 0;
}
