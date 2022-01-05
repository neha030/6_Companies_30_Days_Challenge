/* Question
Given an array of strings, return all groups of strings that are anagrams.
*/

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;


vector<vector<string>> Anagrams(vector<string>& string_list) {
    unordered_map<string, vector<string>> m;
    for(auto & x : string_list) {
        string a = x;
        std::sort(x.begin(), x.end());
        m[x].push_back(a);
    }
    vector<vector<string>> ans(m.size());
    for (const auto& mm:m) {
        auto v = mm.second;
        ans.push_back(v);
    }
    return ans;
}

int main() {
    vector<vector<string>> intervals;
    vector <string>words = {"act","god","cat","dog","tac"};

    intervals = Anagrams(words);

    for(const auto& interval:intervals){
    for(const auto& num:interval)
    {
        cout<<num<<" ";
    }
}
    return 0;
}