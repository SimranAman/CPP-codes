#include<iostream>
using namespace std;

int main(){

cout<<"Enter the value of n"<<endl;
int n;
cin>>n;
int row=1;
int count =1;

 while(row<=n)
 {
    int col=1;
    while(col<=row)
    {
     
     cout<<"*";
     
     col=col+1;
    }
    cout<<endl;
    row=row+1;
 }

};
