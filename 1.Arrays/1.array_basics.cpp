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
    /*An array is a collection of elements of the same data type
      which are stored in contigous memory location*/

   /*We have just declared an array of size 10 without any initialisation,hence all indexes have garbage values*/
      int a[10]; //(This is Static memory allocation meaning a fixed size is defined during compile time itself)
      for(int i=0;i<10;i++)
      {
        cout<<a[i]<<endl;
      }
      
     /*When we declare an array and initialse it with atleast one value ,then all the remaining indexes 
     gets automatically initialised to zero.  
     Note : this happens only when we initialise it during the declaratinon itself (shown below)*/
      
     
  //Here as you can see the initialisation is done during declaration itself,which makes a[0]=3 and all other indices as 0
      int a[10]={3}; //Hence for initialising all values of an array as 0 we use a[10]={0} (meaning make a[0]=0 and initialise all other indices wihth 0)
     for(int i=0;i<10;i++)
      {
        cout<<a[i]<<endl;
      }
    
        
    /* This makes a[0]=3 and all other indices contain the garbage value as usual
      int a[10];
        a[0]=3; */
      
      

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
