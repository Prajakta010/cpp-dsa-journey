#include<iostream>
using namespace std;

int main()
{
int number,n;
cout<<"Enter the number: ";              //taking input from user
cin>>number;

n=number;                    

int count=0;                          //initialization of count 

while(n>0)
{
int digit=n%10;
count++;
n=n/10;
}

cout<<"The Total digit in number is: "<<count;
return 0;
}
