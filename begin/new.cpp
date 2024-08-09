#include<iostream>
using namespace std;

int main(){
 int x=9;
   
    for (int i=2;i<x;i++)
        if (x%i==0)
       { cout<<"number is not prime"<<endl;
       break;
       }
        else
        cout<<"number is prime"<<endl;
}