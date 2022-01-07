#include<bits/stdc++.h>
using namespace std;


vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
       // your code here
       deque<int>dq(k);
       vector<int>ans;
       
       int i;
       
       for(i=0;i<k;++i){
           while(!dq.empty() && arr[i]>=arr[dq.back()]){
               dq.pop_back();
           }
           dq.push_back(i);
           
       }
       
       for(;i<n;++i){
           ans.push_back(arr[dq.front()]);
           
           //shift to new window
           while(!dq.empty() && dq.front()<=i-k){
               dq.pop_front();
           }
           
           while(!dq.empty() && arr[i]>=arr[dq.back()]){
               dq.pop_back();
           }
           
           dq.push_back(i);
           
       }
       
       ans.push_back(arr[dq.front()]);
       
       return ans;
   }

int main()
{
   vector<int>v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        v.push_back(1);
        v.push_back(4);
        v.push_back(5);
        v.push_back(2);
        v.push_back(3);
        v.push_back(6);
   int n=9;
   int k=3;
   cout<<max_of_subarrays(v,n,k);
   return 0;
}