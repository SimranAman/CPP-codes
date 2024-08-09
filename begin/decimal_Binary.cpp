#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;


int main(int argc, char *argv[])
{
cout<<"Enter a decimal number: "<<endl;
int n, k;
int temp,ans=0,i=0;
cin>>n;
 while(n!=0){
    
    temp=n&1;
    ans=(temp*pow(10,i))+ans;
    n=n>>1;
    i++;
 }
 cout<<"Binary value ";
 cout<<ans;

 return 0;
}