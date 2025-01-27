/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
//
________________________________________________________________________
9. Replace Negative Numbers
Write a program to replace all negative numbers in an array with 0. The array should have 6 element

____________________________________________________________-
Name: Yakim ALtamirano  C++ 1D Arrays Worksheet
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
int values[6];   

cout << " Enter 6 numbers \n";
for (int i=0; i < 6;i++){
    cout<< " Enter numer (" <<(i+1)<<") :"<<endl;
    cin>>values[i];
}

for (int i=0; i < 6;i++){
    if ( values [i] < 0) {
        values [i]= 0;
    }
}
cout <<" arrays : " ;
for (int i=0; i < 6;i++){
    cout << values [i] << " ";
}

	return 0;
}