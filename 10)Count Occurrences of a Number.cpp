/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
//
________________________________________________________________________
10))Count Occurrences of a Number
Write a program to count how many times a given number appears in an array of size 8.


____________________________________________________________-
Name: Yakim ALtamirano  C++ 1D Arrays Worksheet
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
int values[8];   
int search, count = 0;

cout << " Enter 8 numbers \n ";

for (int i=0; i < 8; i ++){
    cout << " Enter number (" <<(i+1)<<") :"<<endl;
    cin>> values [i];
}
cout << " Enter number you wish to check \n";
cin>>search;

for (int i=0; i < 8; i ++){
  if  (values [i] == search) {
    count++ ;}
}
cout << " The number appears : "<<count ;
	return 0;
}