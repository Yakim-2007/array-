/*****************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*17. Count Positive and Negative Numbers
Write a program to count how many positive and negative numbers are in an array of size 8.


Name: Yakim ALtamirano  C++ 1D Arrays Worksheet
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
int values [8];
int positive=0,negative=0 ; //keeps count of postive and negative numbers
cout<< "Enter 10 number "<<endl;

for (int i=0;i<8;i++){
    cout <<"enter number ("<<(i+1)<<")"<<endl;
    cin>> values[i];
}

for (int i=0; i <8; i++){
    if (values [i] <0){  
        negative ++;       //counts if its negative
    }
    else if (values[i] >0) {
        positive++;  //count if positive
    }
}
cout << "the negative number found is :" <<negative <<endl;
cout<<"the positive numbers found are : " <<positive <<endl;

  return 0 ;
}