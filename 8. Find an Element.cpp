/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
//
________________________________________________________________________
8. Find an Element
Write a program to input an array of size 5 and a number to search for. Print whether the number is found in the array or not.

____________________________________________________________-
Name: Yakim ALtamirano  C++ 1D Arrays Worksheet
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
	int values [5];                            //array size 5
  int search ;
  bool num = false ;
  
  cout << " Enter 5 numbers " <<endl;
  for (int i = 0; i < 5; i++){        //loop 5 times
      cout <<" Enter ("<<(i+1)<<")  :" << endl;  //add +1 to the loop
      cin >> values [i]; // save input to value
  }
  cout << " Enter the number you wish to find "<<endl;  //the number you wish to find
  cin >>search;
  
  for (int i = 0; i < 5; i++) {
     if (values [i] == search) { // checks to see if the value you entered is in the array
         num = true ;  // if yes then it is true
  }}
  if (num){
      cout <<" The number you enter is in the array ";  //print if it is true
  }
  else {
      cout <<" invalid number not in the array"; //false
  }
	return 0;
}