/* Question
Count the subarrays having product less than k
*/

#include <bits/stdc++.h>
using namespace std;

int countsubarray(int a[], int n, int k)
{
    int count = 0;
    int pro = 1;
    int start = 0;
    int end = 0;
    while (end < n)
    {
        pro *= a[end];
        while (start < n && pro >= k)
        {
            pro /= a[start];
            start++;
        }
        if (pro < k)
        {
            count += end - start + 1;
        }
        end++;
    }
    return count;
}

int main()
{
    int a[] = {1, 2, 3, 4};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 10;
    cout << countsubarray(a, n, k);
    return 0;
}