/*****************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

16. Merge Two Arrays
Write a program to merge two arrays of size 3 into a single array of size 6. Print the merged array.


Name: Yakim ALtamirano  C++ 1D Arrays Worksheet
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
 int arr1[]={1,2,3};  //array size 3 
 int arr2[]={4,5,6};// array 6
int merge [6]; // holds both arr 1 and arr 2 in one
 
 for (int i=0; i <3 ;i++){
     merge [i]= arr1[i];    //inserts all of array 1 into merge
     merge [i + 3]= arr2 [i];  //insert all of array 2 into merge hold 6 values
 }
  
  cout <<" the merge array is : "; 
  for (int i = 0; i <6 ;i++){
      cout << merge[i] <<" "; 
  }
  return 0 ;
}