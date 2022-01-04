/* Question
Given an unsorted array Arr of size N of positive integers. One number'A' from     
set {1, 2, …N} is missing and one number 'B' occurs twice in array. Find these two numbers.
*/

#include <bits/stdc++.h>
using namespace std;

int *findTwoElement(int *arr, int n) {
      sort(arr,arr+n);
      int *ans= new int[2];
      ans[0]=0;
      ans[1]=0;
      int i, idx=0;
      
      for(i=1;i<n;i++)
      {   if(arr[i]==arr[i-1])
          {   ans[0]=arr[i];
              arr[i]=0;
          }
      }
      i=1;
      
      while(i<=n && idx<n){
          if(arr[idx]==0){
              idx++;
          }
          else if(i != arr[idx]){
              ans[1] = i;
              break;
          }
          else{
              idx++;
              i++;
          }
      }
      if(ans[1] == 0)
         ans[1]=i;
      return ans;
}

int main()
{
    int arr[]={1, 3, 3};
    int n=3;
    cout<<*findTwoElement(arr,n);
    return 0;
}