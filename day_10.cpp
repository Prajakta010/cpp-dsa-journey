#include<iostream>
using namespace std;
int main()
{
int sumofdigit=0;
int number,n;
n=number;

cout<<"Enter number: ";
cin>>number;
while (n>0)
{
    int digit=n%10;
    sumofdigit+=digit;
    n=n/10;
}
cout<<"sum of digit in number: "<<sumofdigit;

}
