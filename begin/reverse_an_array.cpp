#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    for(;start<end;){
        swap(arr[start],arr[end]);
        start++,end--;
    }
    return arr[n];
}
 void printarray(int arr[], int n){
 for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
 }cout<<endl;

 
}
int main(int argc, char *argv[])
{  
    int arr[6]={172,2,3,4,60,165};
    reverse(arr,6);
    printarray(arr,6);
}
   