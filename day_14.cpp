#include <iostream>
using namespace std;

int main()
{
    int number, n;
    int sum = 0;

    cout << "Enter the Number: ";
    cin >> number;

    n = number;

    while (n > 0)
    {
        int digit = n % 10;
        int fact = 1;
        for (int i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        n = n / 10;
    }
    if (sum == number)
    {
        cout << "The number is strong number";
    }
    else
    {
        cout << "The number is not strong number";
    }

    return 0;
}
