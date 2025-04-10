#include<iostream>
#include<vector>
using namespace std;

int SingleUniqNum(vector <int> nums){
        
                int ans=0;
                for(int val : nums){
                    ans = ans ^ val;
                }
                return ans;
}

int main(){
    int arr[5], i, j, flag;
    vector <int> vec = {1,2,3,2,1};

    int result = SingleUniqNum(vec);
    cout << "Single Unique Element: " << result<<endl;
    
}