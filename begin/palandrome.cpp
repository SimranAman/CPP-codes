#include<iostream>
using namespace std;

int main(){

    string s = "abcba";
    string New = s;
    
    int n=s.size()-1;

    int start=0;
    int end=n;

    while(start<end){
        swap(s[start],s[end]);
        start++,end--;
 
    }
    if(New==s){
  cout<<"Is palindrome"<<endl;
    }else{
        cout<<"Is not a palindrome"<<endl;
    }
}
