#include <iostream>
using namespace std;

int DecimalToBinary(int num){
    int ans = 0, pow = 1;

    while(num > 0){

        int rem = num % 2;
        num  = num / 2;
        ans = rem * pow + ans;
        pow = pow * 10;
    }

    return ans;
}

int BinaryToDecimal(int num){

    int ans = 0, pow = 1;

    while(num > 0){
    
        int rem  = num % 10;
        num = num / 10;
        ans = rem * pow + ans;
        pow = pow * 2;
    }
    return ans;
}

int NumOfBits(int num){
    int count = 0;

    while(num > 0){
        if(num & 1){
            count++;
        }
        num = num >> 1;
    }
    return count;
}

int main() {
    
    cout << "Binary Value: "<< DecimalToBinary(10) << endl;
    
    cout << "Decimal Value: "<< BinaryToDecimal(101) << endl;

    cout << "Number of Bits: "<< NumOfBits(2) << endl;

}
