/*
- - - - - - - - - - -
Author:artist17
- - - - - - - - - - -
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pb push_back
#define f first
#define s second
void solve()
{ 
  /*Prefix sum - A better approach that can be used to calculate the sum of subarrays of the given array
   
   1. We traverse through the original array and we calculate the cumulative sum of the 
      elements at that particular moment and store that sum in another array let's call psum (prefix sum).
      
  2. Now this psum array can be used to get the sum of any subarray of the given array for the range [i,j].
    
  3. We call this a better method because it eliminates the innermost loop (the K for Loop) -> See previous code if you don't get it
     Which we use to traverse through the elements for the range [i,j]. 
     Hence reducing the Time Complexity from O(N^3) to O(N^2);
   
   NOTE : The largest sum subarray of a given array with only positive elements is the sum of all the elements of the array
   */
  
  int a[10]={1,2,7,-2,5,-1,-6,7,9,10}; //Array can have +ve and -ve negative elements
  int psum[10] ,n=10,sum=0;
  
   psum[0]=a[0]; //idh arta aytha?
    
  for(int i=1;i<n;i++)  //Why we are running from i=1 helu nodana?
    {
       
      psum[i]=psum[i-1]+a[i]; //The psum of ith index is equal to psum of i-1th index plus element at that index in a

    }
  
  int subarraysum;
  for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
      
          if(i>0)
          subarraysum=psum[j]-psum[i-1];   //Why are using if(i>0) artha aytha?

          else
            subarraysum=psum[j];
          
          cout<<subarraysum<<endl;
        }
      subarraysum=0;
   }
}
int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll int t = 1;
    //cin >> t;
    while(t--)
    {
        solve();
    }
return 0;
}
