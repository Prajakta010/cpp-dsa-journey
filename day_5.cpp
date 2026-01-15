#include<iostream>
using namespace std;

int main()
{
int n,i;                       //take input number from user
cout<<"enter the number: ";
cin>>n;

if(n<=1)                     // 0 and 1 are not prime number
{
    cout<<" not prime number";
    return 0;
}
bool isprime=true;             //if n is divisible by i then is not prime number
for(i=2;i<n;i++)
{
    if(n%i==0)
    {
      isprime=false;         //if not divisible then the number is prime number
      break;
    }
}
if(isprime)
{
    cout<<"prime number";
}
else{
    cout<<"not prime number";
}

return 0;

}
