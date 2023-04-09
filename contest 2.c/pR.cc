#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>
#include<stdlib.h>
#include<map>
#include<vector>
#include<math.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,num=0;
    long double r;
    cin>>n;
    while(n--)
    {
        cin>>r;
        num++;
        cout<<"Case "<<num<<": "<<fixed<<setprecision(2)<<(r*2)*(r*2)-(2*acos(0.0))*r*r+0.0000000001<<endl;
    }
    return 0;
}
