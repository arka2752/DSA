// This is Arka's code.....
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
   8
   9 3 5 7 6 4 8 2
*/
void MergeSort(int L, int H, int num[])
{
    if (L < H)
    {
        int mid = (L + H) / 2;
        MergeSort(L, mid);
        MergeSort(mid + 1, H);
        Merge(L, mid, H, num);
    }
}
void Merge(int L, int mid, int H, int num[])
{
    int i = L, j = mid + 1, k = L;
    int ara[n];
    while (i <= mid && j <= H)
    {
        if (num[i] < num[j])
        {
            ara[k] = num[i];
            k++;
            i++;
        }
        else
        {
            ara[k] = num[j];
            k++;
            j++;
        }
    }

    for (; i <= mid; i++)
    {
        ara[k] = num[i];
        k++;
    }
    for (; j <= H; j++)
    {
        ara[k] = num[j];
        k++;
    }
}
int main()
{
    int n;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    MergerSort(0, n - 1, num);
}