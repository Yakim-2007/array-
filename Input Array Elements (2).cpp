/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
//

2. Input Array Elements
Write a program to input 10 integers from the user and store them in an array. Then, print the elements in the same order
Name: Yakim ALtamirano  C++ 1D Arrays Worksheet
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
   int values[10];   // array size
   cout <<" Enter 10 numbers : "<<endl;
   
   for(int i=0; i<10 ; i++){  //loop 10 times //
       cout << " Enter " << (i + 1)<<" : ";  //increaments values until vaule reaches asking 10 times
       
       cin >>values [i]; // stores each values in a array//
   }
   for(int i=0; i<10 ;i++){  
       cout << values [i];  // print every 10 numbers stores in the array
       cout<<" "; // add a space in between 
   }
    return 0;
}