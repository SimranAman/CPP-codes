#include<iostream>
using namespace std;

bool solution(int arr[],int n,int student,int m){
 int studentCount=1;
 int pagecount=0;
 for(int i=0;i<n;i++){
    if(pagecount+arr[i]<=m){
        pagecount+=arr[i];
    }
    else{
        studentCount++;
        if(studentCount>student||arr[i]>m){
            return false;
        }
    }
    pagecount=arr[i];
 }
 return true;
}

int main(){

 int arr[4]={10,20,30,40};
 int student=2;

 int totalPages=0;

 for(int i=0;i<4;i++){
    totalPages+=arr[i];
 }
 cout<<totalPages<<endl;
 int s=0;
 int e=totalPages;
  int ans=-1;
 int m= s+ (e-s)/2;
 
 
 while(s<=e){
  if(solution(arr,4,2,m)){
    ans=m;
    e=m-1;
  }else{
    s=m+1;
  }
   m= s+ (e-s)/2;
   cout<<m<<endl;
 }
//cout<<ans<<endl;
}