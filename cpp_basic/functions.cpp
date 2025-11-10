#include <iostream>
using namespace std;

// function definition:
void printHello () {

    cout<<"Hello world.";
}

int sum(int a, int b){

    int s = a + b;
    return s;
}

int deciToBinary (int decNm ){
    int ans = 0, pow = 1;
    while (decNm > 0){
        int rem = decNm % 2;
        decNm /= 2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

int binaryToDecimal (int binNm ){
    int ans = 0, pow = 1;
    while (binNm > 0){
        int rem = binNm % 2;
        ans += (rem * pow);


        binNm /= 10;
        pow *= 2;
    }
    return ans;
}

int main(){
    int decNm = 50;
    int x = 4, y = 8;
    
    cout<<"bitwise operator (and '&'):"<< (x & y) <<endl;
    cout<<"bitwise operator (or '|'):"<< (x | y) <<endl;
    cout<<"bitwise operator (xor '^'):"<< (x ^ y) <<endl;
    cout<<"bitwise operator (left shift '<<'):"<< (x << y) <<endl; // formula of : << = a* 2^b (a and b are numbers)
    cout<<"bitwise operator (right shift '>>'):"<< (x >> y) <<endl; // formula of : >> = a / 2^b (a and b are numbers)
    

//     for (int i=1; i<=10; i++){
//     cout<<deciToBinary(i)<<endl;
//    } 



    cout<<deciToBinary(19)<<endl;
    printHello();
    cout<<sum(22,33)<<endl;
    cout<<binaryToDecimal(10011)<<endl;

   


    return 0 ;
}