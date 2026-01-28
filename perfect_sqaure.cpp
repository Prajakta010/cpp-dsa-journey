#include<iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter the number: ";
    cin >> n;

    bool isperfect = false;

    for (i = 1; i * i <= n; i++)
    {
        if (i * i == n)
        {
            isperfect = true;
            break;
        }
    }

    if (isperfect)
    {
        cout << "The number is a perfect square";
    }
    else
    {
        cout << "The number is NOT a perfect square";
    }

    return 0;
}
