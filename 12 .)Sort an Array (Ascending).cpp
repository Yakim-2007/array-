/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

12. Sort an Array (Ascending)
Write a program to sort an array of 6 integers in ascending order.
Name: Yakim ALtamirano  C++ 1D Arrays Worksheet
*******************************************************************************/

#include <iostream>
#include <algorithm>  // function for sort array 
using namespace std;
int main()
{
    int values [6];
    
    cout <<" Enter 6 number "<<endl;
    for (int i=0; i < 6 ;i++){
        cout <<" Enter number ("<<(i+1)<<")  : ";
        cin>> values[i];
    }
    sort (values , values + 6);  //sorts the array in order
    
    for (int i= 0; i < 6 ; i ++){
        cout << values [i]<< " ";
    }
 cout << endl;
    return 0;
}