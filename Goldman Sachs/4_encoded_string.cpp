/* Question
Given a string, Your task is to  complete the function encode that returns the run length encoded string for the given string.
eg if the input string is “wwwwaaadexxxxxx”, then the function should return “w4a3d1e1x6″.
*/

#include <bits/stdc++.h>
using namespace std;

void encode(string str)
{
    int i=0;
    for(i=0;i<str.size();i++)
    {
        int c=1;
        while(i<str.size()-1 && str[i]==str[i+1])
        {
            c++;
            i++;
        }
        cout<<str[i]<<c;
    }
}

int main()
{
    string str = "abbbcdddd";
    encode(str);
    return 0;
}