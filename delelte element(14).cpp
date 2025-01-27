/*****************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

1414. Delete an Element*
Write a program to delete an element from a specific index in an array of size 7. (Assume the user provides the index.)


Name: Yakim ALtamirano  C++ 1D Arrays Worksheet
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
  int values[ 7] = {1,2,3,4,5,6,7} ;
  int index ;     //stores the values of the location index
  
  
  cout<< " The orginal array is:";
  for(int i =0; i < 7; i++){
      cout <<values [i]<<" "; //display 1-7//
  }
cout << endl;
cout << " The index you wish to delelte (0-6) "<<endl;  //number you wish to delete//
cin>>index;

if (index < 0 || index >=7){
    cout<<" The number is invalid";
}//check to see if number is within the array /valid

if ( int i= index ||i<6 ;i++){
    values[i]= values[i+1];   //moves numbers to the left
}
cout <<" The new array is: ";
  for ( int i=0 ; i<6 ;i++){
    cout << values[i]<< " ";  //print the remain numbers
}
    return 0;
}