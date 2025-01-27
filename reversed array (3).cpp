/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
//

3. Reverse Array
Write a program to input 5 integers and print them in reverse order.
Name: Yakim ALtamirano  C++ 1D Arrays Worksheet
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
   int values[5];   // array size
   cout <<" Enter 10 numbers : "<<endl;
   
   for(int i=0; i<5 ; i++){  //loop 5 times //
       cout << " Enter " << (i + 1)<<" : ";  //increaments values until vaule reaches asking 5 times
       
       cin >>values [i]; // stores each values in a array//
   }
   for(int i=4; i >=1 ;i--){  
       cout <<  values [i];  // print every 5 numbers stores in the array reverse
       cout<<" "; // add a space in between 
   }
    return 0;
}