//This is Arka's code.....
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    
    int ar[n]={8,5,2,4,1};

    cout<<"Before sort = ";

    for(int i=0; i<n; i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;



    for(int i=0; i<n; i++){
        int x=ar[i];
        int j=i-1;

        while(j>=0 && ar[j]>x){
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=x;

    }

    cout<<"After sort = ";

    for(int i=0; i<n; i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}