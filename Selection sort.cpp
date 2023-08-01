// This is Arka's code.....
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;

    int ar[n] = {5, 2, 3, 1, 9};

    cout << "Before sort = ";
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout<<endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i] > ar[j])
            {
                swap(ar[i], ar[j]);
            }
        }
    }
    cout << "After sort = ";
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout<<endl;
}