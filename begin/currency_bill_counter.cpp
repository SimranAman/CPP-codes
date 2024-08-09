#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;


int main(int argc, char *argv[])
{
    int Bill,deno;
    cout<<"Enter the amount"<<endl;
    int amount;
    cin>>amount;
    if(amount>=100){
         deno=100;
    }else if(amount>=50){
       deno=50;
    }else if(amount>=20){
       deno=20;
    }else if(amount>=10){
       deno=10;
    }else if(amount>=5){
       deno=5;
    }else if(amount>=1){
       deno=1;
    }
    switch(deno){
        case 100: Bill=amount/100;
        amount=amount%100;
        cout<<"number of 100 bills "<<Bill<<endl;
       
        case 50: Bill=amount/50;
        amount =amount%50;
        cout<<"number of 50 bills "<<Bill<<endl;
        
        case 20: Bill=amount/20;
        amount =amount%20;
        cout<<"number of 20 bills "<<Bill<<endl;
        
        case 10: Bill=amount/10;
        amount =amount%10;
        cout<<"number of 10 bills "<<Bill<<endl;
       
        case 5: Bill=amount/5;
        amount =amount%5;
        cout<<"number of 5 bills "<<Bill<<endl;
        
        case 1:Bill=amount/1;
        amount =amount%1;
        cout<<"number of 1 bills "<<Bill<<endl;
        
    }
}