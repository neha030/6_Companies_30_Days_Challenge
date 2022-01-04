/* Question
Given two strings str1 and str2. We say that str2 divides str1 if it's possible
to concatenate multiple str2 to get str1. For example, ab divides abab.
if str2 does not divide str1, return -1. Otherwise, return the smallest string
str3 such that str3 divides both str1 and str2.
*/

#include <bits/stdc++.h>
using namespace std;

string concat(string str1, string str2)
{
    if ((str1 + str2) != (str2 + str1))
    {
        return "";
    }

    else if (str1 == (str2))
    {
        return str1;
    }

    else if (str1.length() > str2.length())
    {
        // remove str2 from str1
        return concat(str1.substr(str2.length()), str2);
    }
    else
    {
        // remove str1 from str2
        return concat(str2.substr(str1.length()), str1);
    }
}


int main()
{
    string str1 = "ABCABC";
    string str2 = "ABC";
    cout << concat(str1, str2);
    return 0;
}