#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;


int main(int argc, char *argv[])
{
cout<<"Enter first digit"<<endl;
int a;
cin>>a;
cout<<"Enter the expression"<<endl;
char exp;
cin>>exp;

cout<<"Enter second digit"<<endl;
int b;
cin>>b;

switch(exp){
    case '+': cout<<"Sum of a and b is "<<a+b<<endl;
    break;
    case '-': cout<<"Subtarction of a and b is "<<a-b<<endl;
    break;
    case '/': cout<<"Division of a and b is "<<a/b<<endl;
    break;
    case '*': cout<<"Product of a and b is "<<a*b<<endl;
    break;
   // case 'Pow': int power=pow(a,b);
    //cout<<"a power b is "<<power<<endl;
    //break;
}


}    