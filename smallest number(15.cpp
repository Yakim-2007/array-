/*****************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

15. Find Minimum Element
Write a program to find and print the smallest number in an array of size 6.

Name: Yakim ALtamirano  C++ 1D Arrays Worksheet
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
  int values[ 6]; 
  int min;
 
  cout <<" Enter 6 numbers " <<endl;
  for (int i = 0; i < 6;i++){
      cout<< " Enter number ("<<(i+1)<<") :" <<endl;
      cin>> values [i];
  }
  min=values[0];
  for(int i=1 ; i < 6;i++){
      if (values[i] < min ){
          min=  values[i];
      }
  }
  cout << "The smallest number is : " <<min;
  
  return 0 ;
}