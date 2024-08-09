#include<iostream>
using namespace std;

int main(){
 int x=2;
int count = 0;
//bool isprime=true;

 for(int i=1; i<=x;i++){
    if(x%i==0){
        count++;
    }
 }
if(count==2){
    cout<<"Number is prime"<<endl;
}else{
    cout<<"Number is not prime"<<endl;
}




/*for(int i=2;i<x;){
     if(x%i==0){
        isprime=false;
     break;
     }
     else{
        isprime=true;
        i++;
     }
    }*/
//cout<<isprime;
/*if(isprime){
    cout<<"Number is prime"<<endl;
}else{
    cout<<"Number is not prime"<<endl;
}*/

}