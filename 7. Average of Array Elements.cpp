/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
//
________________________________________________________________________
7. Average of Array Elements
Write a program to calculate and print the average of the elements in an array of size 7.



Name: Yakim ALtamirano  C++ 1D Arrays Worksheet
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
	int values [7];                            //array size 7
	int sum = 0;                        //counter to sum up all 7 numbers   
	
	cout << " Enter 7 numeber \n : ";
	for (int i = 0; i < 7 ;i++){
	    cout << " Enter (" <<(i + 1)<<")"<<endl;
	    cin>> values[i];
	}
	
for ( int i=0; i < 7 ; i ++) {
    sum += values[i];
}
int average = sum / 7;
cout <<"  The Avegerage of all number is : " <<average;
	return 0;
}