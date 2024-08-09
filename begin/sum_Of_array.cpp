#include<conio.h>
#include<iostream>
using namespace std;
int sumOfArray( int arr[], int n){
 int sum=0;   
 cout<<"Enter the array Elements \n";
for(int i=0;i<n;i++){
    cin>>arr[i];
    sum = sum + arr[i];
 }
 return sum;
}
int main(){
 int n;
 cout<<"Enter the size of an array\n";
 cin>>n;
 int arr[n]={};
 
int sum= sumOfArray(arr,n);
 
cout<<"Sum is "<<sum;
}