/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
//

4. Sum of Array Elements
Write a program to calculate and print the sum of all elements in an array of size 8.

Name: Yakim ALtamirano  C++ 1D Arrays Worksheet
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
   int values[8];  // array size
   int sum=0; // records sum vaules
   cout <<" Enter 8 numbers : "<<endl;
   
   for(int i=0; i < 8 ; i++){  //loop 5 times //
       cout << " Enter " << (i + 1)<<" : ";  //increaments values until vaule reaches asking 5 times
       
       cin >>values [i]; // stores each values in a array//
   }
   for(int i = 0; i < 8 ;i++){  
       cout <<  values [i]<< " "<< endl; // print every 8 numbers stores in the array 
       sum += values[i] ; //adds every value increamented to sum//
      
   }
    cout << " The sum of the numbers is : " << sum ;
    return 0;
}