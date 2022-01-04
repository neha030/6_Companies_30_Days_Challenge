/* Question
Given a pattern containing only I's and D's. I for increasing and D
for decreasing.Devise an algorithm to print the minimum number following that pattern.
*/

#include <bits/stdc++.h>
using namespace std;

string printMinNumberForPattern(string s) {
       string ans;
        stack<int> st;
        int num = 1;
        for(auto it:s){
            if(it == 'D'){
                st.push(num);
                num++;
            }else{
                st.push(num);
                num++;
                while(!st.empty()){
                    ans += to_string(st.top());
                    st.pop();
                }
            }
        }
        st.push(num);
        while(!st.empty()){
            ans += to_string(st.top());
            st.pop();
        }
        return ans;
    
}

int main()
{
    string s="IIDDD";
    cout<<printMinNumberForPattern(s);
    return 0;
}