#include<conio.h>
#include<iostream>
using namespace std;

int main(){
 int number;
 cout<<"Enter the number ";
 cin>>number;
 
 int sum=0;
 while(number!=0){
     int digit = number%10;
     number =number/10;
     sum += digit; 
    } 
    cout<<sum<<endl;
}