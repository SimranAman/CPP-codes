#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number "<<endl; 
    cin>>n;
    int s=0;
    int e=n;
    int ans;
    int m= s + (e-s)/2;
    int sqr;
    while(s<=e){
        sqr = m*m;
        if(sqr==n){
            ans=m;
        }
        if(sqr>n){
            e=m-1;
        }else{
            ans=m;
            s=m+1;
        }
       m= s + (e-s)/2;
    }
    int inc=0.1;
    while(ans<n){
        ans+=inc;
        ans*ans;
        
    }
    cout<<ans<<endl;
}