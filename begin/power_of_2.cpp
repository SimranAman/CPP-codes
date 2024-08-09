#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;


int main(int argc, char *argv[])
{
 cout<<" Enter a number "<<endl;
 int n;
 cin>>n;
 int x=0;
 bool is_power;
  while(n>=pow(2,x)){
      if(n==pow(2,x)){
        is_power= true;
        cout<<"2's power "<<x<<" is "<<n<<endl;
        }else{
        is_power= false;
        }
      x++;
  }
      
    cout<<is_power<<endl;
    
}       