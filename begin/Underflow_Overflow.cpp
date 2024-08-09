#include<iostream>

using namespace std;


int main()
{

cout<<"\n\n Checking the Overflow and underflow during various operations: \n ";
cout<<" range of integer is [-2147483648, 2147483647] "<<endl;

int n1= 2147483647; //maximum range of integer
cout<<" Overflow the integer range and set in minimum range :  "<<n1 +1 << endl;
cout<<"Increasing from its minimum range: "<<n1 +2 <<endl;
cout<<" product is :" <<n1*n1<< endl;

int n2= -2147483648; //minimum range of integer

cout <<" Underflow the range and set in maximum range : " << n2 - 1 << endl; 
cout <<" Decreasing from its maximum range : " << n2 - 2 << endl; 
cout <<" Product is : " << n2 * n2 << endl; 
cout << endl;


    return 0;
}