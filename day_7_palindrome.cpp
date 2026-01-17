#include<iostream>
using namespace std;

int main()
{
int n,number,reverse=0;
cout<<"enter the number: ";
cin>>number;

n=number;            //n copy the original number

while(n>0)           
{
int digit=n%10;
reverse=reverse*10+digit;
n=n/10;
}

if(reverse==number)
{
cout<<"The number is Palindrome";
}
else
{
cout<<"The number is not Palindrome";
}
return 0;
}
