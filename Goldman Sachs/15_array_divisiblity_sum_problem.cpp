/* Question
Array Pair Sum Divisibility Problem
*/

#include <bits/stdc++.h>
using namespace std;

  bool canPair(vector<int> arr, int k) {
        
        unordered_map<int,int> mp;
        
        int n = arr.size();
        if(n % 2 != 0) return false;
        
        for(int i=0;i<n;i++){
            mp[arr[i] % k]++;
        }
        
        for(int i=0;i<n;i++){
            
            int rem1 = arr[i] % k;
            
            if(rem1 == 0){
                if(mp[rem1] % 2 != 0) return false;
            }
            else{
                int rem2 = k - rem1;
                if(rem1 == rem2 and mp[rem1] % 2 != 0) return false;
                if(mp.find(rem2) == mp.end()) return false;
                if(mp[rem1] != mp[rem2]) return false;
            }
            
        }
        return true;
}

int main()
{
    vector<int> arr;
    arr.push_back(9);
    arr.push_back(5);
    arr.push_back(7);
    arr.push_back(3);
    int k=6;
    cout<<canPair(arr,k);
    return 0;
}