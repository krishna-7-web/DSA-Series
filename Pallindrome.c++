#include<iostream>
#include <climits>
using namespace std;

int isPalindrome(int x) {
        
    int rem, rev=0;
    int org = x;

    if(x < 0) return false;
    int res = x;
    while(x != 0){
        rem = x % 10;
        rev = rev * 10 + rem;
        x = x / 10;
    }

    if(res == rev){
        return res;
    }

    return 0;
}


int main(){

    int result = isPalindrome(151);

    if(result)
        cout << "It is pallindrome";
    else
        cout << "It is not a pallindrome";
        
}