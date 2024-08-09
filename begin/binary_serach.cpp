#include<iostream>
using namespace std;

int FirstOccurance(int arr[], int size, int key){
    int s=0;
    int e= size-1;
    
    int ans=-1;
    while(s<=e){
    int m= (s+e)/2;
    if(key==arr[m]){
       ans=m;
       e=m-1;
    }else if (key>arr[m]){//right part
       s=m+1;
    }else{//left part
        e=m-1;
    }
    return ans ;
}
  
}
int LastOccurance(int arr[], int size, int key){
    int s=0;
    int e= size-1;
    int m= (s+e)/2;
     int ans=-1;
    while(s<=e){
    int m= (s+e)/2;
    if(key==arr[m]){
       ans=m;
       s=m+1;
    }else if (key>arr[m]){//right part
       s=m+1;
    }else{//left part
        e=m-1;
    }
    return ans ;
}
}

int main()
{
 int array[4]={1,3,3,4};
 
 cout<<"First occurenace of element 3 "<<FirstOccurance(array,4,3)<<endl;
}
 