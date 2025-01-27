/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
//
________________________________________________________________________
11. Copy an Array
Write a program to copy all elements of one array into another array. Both arrays should have 5 elements.
____________________________________________________________-
Name: Yakim ALtamirano  C++ 1D Arrays Worksheet
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
int arr[5], copy [5];   

cout << " Enter 5 numbers for 1st array";
for (int i=0; i < 5; i++){
    cout << " Enter number ("<<(i+1)<< ") :"<<endl;
    cin>>arr[i];
}

for (int i=0; i <5 ;i ++){
 copy [i] = arr[i];
    
}

cout <<" The orginal arry is : ";
for (int i=0; i <5 ;i ++){
 cout <<arr[i]<<" " <<endl;}
 
  // Display the copied array
    cout << "Copied Array: ";
    for (int i = 0; i < 5; i++) {
        cout << copy[i] << " ";
    }

	return 0;
}