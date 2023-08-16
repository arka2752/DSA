// This is Arka's code.....
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
m=5,n=4
A = {2,5,8,15,16}
b={3 4 10 14}



*/
void Merge(int A[], int B[], int n, int m)
{
    
    int C[m + n];
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (A[i] < B[j])
        {
            C[k] = A[i];
            i++;
            k++;
        }
        else
        {
            C[k] = B[j];
            j++;
            k++;
        }
    }

    for (; i < n; i++)
    {
        C[k] = A[i];
        k++;
    }

    for (; j < m; j++)
    {
        C[k] = B[j];
        k++;
    }

    cout<<"After merge : "<<endl;


    for(int i=0; i<k; i++){
        cout<<C[i]<<" ";

    }cout<<endl;


    
}
int main()
{
    cout<<"Enter m and n = ";
    int n, m;
    cin >> n >> m;
    int A[n], B[m];

    cout<<"Enter A = ";

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout<<"Enter B = ";
    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }

    cout<<"Before Merge :"<<endl;
    cout<<"A : ";
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";

    }cout<<endl;
      cout<<"B : ";
    for(int i=0; i<m; i++){
        cout<<B[i]<<" ";

    }cout<<endl;

    Merge(A, B, n, m);
}