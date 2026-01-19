#include <iostream>
using namespace std;

int main()
{
    int n, number, cube;
    cout << "enter the number: ";
    cin >> number;
   int armstrong=0;
    n = number;

    while (n > 0)
    {
        int digit = n % 10;
        armstrong=armstrong+(digit*digit*digit);                   //calculate armstrong number
        n = n / 10;
        
    }
    if(number==armstrong)
    {
        cout<<"The given number is armstrong";
    }
    else
    {
        cout<<"The given number is not armstrong";
    }

    return 0;
}
