#include<iostream>
using namespace std;
 int alternate(int arr[], int n){
  int start=0;
  int end = n-1;
for(;start<end;){
    swap(arr[start],arr[start+1]);
    start+=2;
    
}
return arr[n];
 }
void printarray(int arr[], int n){
 for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
 }cout<<endl; 

 
}
int main(){
 cout<<"Swapping alternate elements in an array \n";
 int arr[6]={1,2,3,4,5,6};
 alternate(arr,6);
 printarray(arr,6);
}