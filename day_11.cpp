#include<iostream>
using namespace std;

int main()
{

int a,b,n;
a=0;
b=1;
cout<<"enter the number: ";
cin>>n;

cout<<"Fibonacci series: ";
while(n>0)
{
    cout<<a<<" ";
    int temp=a+b;          //store next value
    a=b;
    b=temp;
    n--;
}


}
