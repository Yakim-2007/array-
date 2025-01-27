/*****************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

13.Insert an Element
Write a program to insert an element at a specific index in an array of size 7. (Assume the user provides the index and value.)

Name: Yakim ALtamirano  C++ 1D Arrays Worksheet
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
  int values[ 7] = {1,2,3,4,5,6,7} ;
  int index ,value;     //stores the values of the location index
  
 cout<< " The orginal array is " ;
  for(int i=0; i < 7;i++) {
      cout<<values[i]<<" ";
  }
  cout<<endl;
  
 
 cout <<" Enter the index (0-6) where you want to insert "<<endl; //asks for the index location as to where you want to insert it
 cin >> index;
     cout << " Enter the new value \n" ; // the new vaule you want to insert
     cin >>value;
  
  for ( int i =6; i >= index ;i--){  //    // Shift elements to make space for the new element
      values [i + 1]= values[i];
  }
  values [index]= value;
  cout <<" The updated array is: ";
  
  for (int i=0;i <7 ;i++){
      cout <<values[i] << " ";
  }
  
    return 0;
}