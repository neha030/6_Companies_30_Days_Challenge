/*Question
Calculating Maximum Profit (Multiple Ladders Question)
*/

#include<bits/stdc++.h>
using namespace std;

   int maxProfit(int k, int n, int a[]) {
       int dp[k+1][n];
       memset(dp,0,sizeof(dp));
       for(int i=1;i<=k;i++)
       {
           int mx=INT_MIN;
           for(int j=1;j<n;j++)
           {
               mx=max(mx,dp[i-1][j-1]-a[j-1]);
               dp[i][j]=max(dp[i][j-1],mx+a[j]);
           }
       }
       return dp[k][n-1];
   }

int main()
{
   int a[] = {10, 22, 5, 75, 65, 80};
   int n=6;
   int k=2;
   cout<<maxProfit( k, n, a);
   return 0;
}



