/*A whole array cannot be passed as an argument to a function in C++. 
You can, however, pass a pointer to an array without an index by specifying the array’s name.
In C, when we pass an array to a function say demo(), it is always treated as a pointer by demo(). The below example demonstrates the same.*/

#include <iostream>
using namespace std;

/*As arr is passed to demo() it is treated as a pointer that points to the array
   0.Note that arr[] for demo is just a pointer even if square brackets are used (SAME AS void demo(int *arr))
   1.Size of the pointer arr in demo varies depending upon various factors (hence we cannot get the correct array size or number of elements)
     Hence it's always recommended to pass the size of the array from the main during call like -> demo(arr,n)
   2.Any changes made to arr will be reflected back to original(because it's treated as a pointer which means that call by reference is implemented internally)*/

void demo(int arr[]) // SAME AS void demo(int *arr)
{
    unsigned int n = sizeof(arr) / sizeof(arr[0]);
    cout << "\nArray size inside demo() is " << n;
    arr[7]=24; //This change will be reflected in the array
}
 
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    unsigned int n = sizeof(arr) / sizeof(arr[0]); //here we get the exact n value(in this case 8) because arr is actually an array in main()
    cout << "Array size inside main() is " << n;
    for(int i=0;i<n;i++)
      cout<<a[i]<<endl;
    demo(arr); //arr is passed to demo()
  
     //Pinting the elements after function call
     for(int i=0;i<n;i++)
      cout<<arr[i]<<endl;
    return 0;
}
