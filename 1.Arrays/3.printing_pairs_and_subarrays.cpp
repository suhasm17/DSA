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
    
  /*If we need to print all the possible pairs of an array we just need two for loops
     1. To keep track of the first element (below we use the i index for this)
     2. To keep track of the second element which is gonna be paired with the first element (below we use the j index for this) */
  
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        { 
                cout<<a[i]<<" "<<a[j]<<endl; //printing the pair(a[i],a[j])
        }
  
    
   /*
    First we need to understand that subarrays are the arrays which are the sliced part of a given array
    For Example :
            a[]={1,2,3,4,5} then {1,2} {2,3,4} {4,5} {3,4,5}   --> all these are subarrays 
            
            -> Because, elements are present in the same order as in the original array
               only it's that they are just the sliced part of the given array
               
            a[]={1,2,3,4,5} then {1,3} {1,4,5} {1,2,4} {3,5}   --> all these aren't subarrays
            
            -> Because, elements aren't present in the same order as in the original array
               only it's that they are just the possible combinations
     
    So, If we need to print all possible subarrays of an array we make use of three for loops
     
     1. To keep track of the first element (below we use the i index for this)
     2. To keep track of the second element (below we use the j index for this)
     3. To print all the elements present in the range [i,j] (below we use the k index for this) */
    
      
    int n=5;
    int a[]={1,2,3,4,5};
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=i;k<=j;k++) //Iterating the k variable through the range [i,j]
            {
                cout<<a[k]<<" "; //Printing the subarray
            }
            cout<<endl;
        }
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
