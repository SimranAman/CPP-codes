#include<iostream>
using namespace std;
 int keyOccu(int arr[], int n,int key){
   int s=0;
   int e=n-1;
   int m= s+ (e-s)/2;
   int count =0;
   while(s<=e){
     
    if(key<arr[m]){
        e=m-1;
     }else if(key>arr[m]){
         s=m+1;
     }else if(key==arr[m]){
          count++;
     }
   m=s+(e-s)/2;
   }
   return count;
 }

int main(){
//int n;
int key=4;
int arr[4]={1,2,3,4};
cout<<"No of occurance of 4 is "<<keyOccu(arr,4,key);
}
