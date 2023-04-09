#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b;
    for(int i=n/2;i>0;i--)
    {
        if(__gcd(i,n-i)==1)
        {
            a=i;
            b=n-i;
            break;
        }
    }
    cout<<a<<" "<<b<<endl;
    return 0;
}