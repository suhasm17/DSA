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
   /* Kadane's Algorithm - An efficient algorithm that is used to find the largest subarray sum in an given array
   
    --> Time Complexity - O(N)
    --> Space Complexity - O(1)
   
   */
   
   
  int a[]={-2,-3,-1,-5,-6};
   int csum=0; //Current sum (csum) to keep track of the current sum
   int largest=INT_MIN; //Largest to keep track of the largest subarray sum  // INT_MIN idh yaak use maadta idhivi helu?
   for(auto val : a)
   {
      csum+=val;
      largest=max(largest,csum);
      if(csum<0) 
        csum=0;
      
   }
   cout<<largest;
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
