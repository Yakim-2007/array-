/*****************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

**18. Sum of Odd-Indexed Elements
Write a program to calculate and print the sum of elements at odd indices in an array of size 10.


Name: Yakim ALtamirano  C++ 1D Arrays Worksheet
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
int values [10];
int sum=0;
cout << " Enter 10 numbers "<<endl;

for (int i=0; i<10 ;i++){
    cout <<" Enter number ("<<(i+1)<<") : \n"; //askes for numbers
    cin >> values [i];
}
for (int i =1 ;i <10 ; i +=2){
    sum += values [i];            //adds to sum if index is odd
}
  cout << "Sum of numbers at odd indices: " << sum << endl;
  return 0 ;
}