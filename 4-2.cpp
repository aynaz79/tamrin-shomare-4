#include <bits/stdc++.h>
using namespace std;

bool isFactorial(int number)
{
    int i = 1;
    while (true)
    {
        if (number % i == 0)
        {
            number /= i;
        }
        else
        {
            break;
        }
        ++i;
    }
    if (number == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (isFactorial(number))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}