#include<iostream>
#include <bits/stdc++.h>  
using namespace std;

int getMin(int arr[], int n)  
{  
    return *min_element(arr, arr + n);  
}  
  
int getMax(int arr[], int n)  
{  
    return *max_element(arr, arr + n);  
}

bool isminweight(int arr[],int n, int days,int m){
int noOfpackage=1;
int weightofPackage=0;
int noOfdays=0;

for(int i=0;i<n;i++){
    if(weightofPackage+arr[i]<=m){
        weightofPackage+=weightofPackage;
    }else{
        noOfdays++;
        if(noOfdays>days||arr[i]>m){
            return false;
        }
    }
}return true;
}


int main(){
 int arr[6]={3,2,2,4,1,4};
 int days=3;
 //int s= getMax(arr,6);
 int totalWeight=0;

 for(int i=0;i<6;i++){
 totalWeight+=arr[i];
 }
int s= getMax(arr,6);
 int e= totalWeight;

 int m=s+ (e-s)/2;
  int ans=0;
 while(s<=e){
    if(isminweight(arr,6, days, m)){
        ans=m;
        e=m-1;
    }
   else{
    s=m+1;
   }
    m=s+ (e-s)/2;
 }
cout<<ans;
}