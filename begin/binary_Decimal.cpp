#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;


int main(int argc, char *argv[])
{
cout<<"Enter a binary number: "<<endl;
int n, k;
int temp,ans=0,i=0;
cin>>n;
 while(n!=0){
    
    temp=n%10;
    if(temp==1){
        ans=(temp*pow(2,i))+ans;
        cout<<ans<<endl;
    }
    n=n/10;
    i++;
 }
 cout<<"Decimal value ";
 cout<<ans;

}