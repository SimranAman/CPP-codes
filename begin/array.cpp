#include<conio.h>
#include<iostream>
using namespace std;

void update(int arr[],int n){
arr[0]=3;
cout<<"Printing array in the function \n";
for(int i=0;i<4;i++){
   cout<<arr[i]<<endl;
}

 }


int main()
{
 //int n;
 //cout<<"Enter the size of the array "<<endl;
 //cin>>n;
 int array[4]={1,2,4,5};
update(array,4);
cout<<"Printing array in the  main function \n";
for(int i=0;i<4;i++){
  cout<<array[i]<<endl;
}

}
 