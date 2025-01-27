/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
//
________________________________________________________________________
6. Count Even Numbers
Write a program to count how many even numbers are present in an array of size 10.


Name: Yakim ALtamirano  C++ 1D Arrays Worksheet
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
	int values [10];                            //array size 10
	int count = 0;                              // counter for even numbers
	
	cout << " Enter 10 numbers " <<endl ;
	
	for (int i = 0 ; i < 10 ; i ++){             //loops 10 times 
	    cout << "Enter  number ("<< (i + 1) << ")  :" <<endl;  //ask for other number and adds to loop count
	    cin >> values [i];    // it stores in the array
	}
	 	for (int i = 0 ; i < 10 ; i ++) {
	 	    if (values [i] % 2 == 0) {  //  is the values divsable by 2
	 	        count ++;              // if yes add +1 to count
	 	    }
	 	   
	 	}
	 	 cout << "The number of even number found was : " << count ;
	return 0;
}