/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
//

5. Largest Element in an Array
Write a program to find and print the largest number in an array of size 6.

Name: Yakim ALtamirano  C++ 1D Arrays Worksheet
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
   int values[6];  // array size
   int max = values [0]; // sets a default 
   cout <<" Enter 6 numbers : "<<endl;
   
   for(int i=0; i < 6 ; i++){  //loop 6 times //
       cout << " Enter " << (i + 1)<<" : ";  //increaments values until vaule reaches asking 6 times
       
       cin >>values [i]; // stores each values in a array//
   }
   for(int i = 1; i < 6 ;i++){  
      if ( values [i] > max) {  // compares every value if great 
          max = values[i];   // if the new input is bigger let it equal to max// 
      }
      
   }
    cout << " The largest  numbers is : " << max ;  // prints the largest number entered
    return 0;
}