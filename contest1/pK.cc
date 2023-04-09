#include <ext/pb_ds/tree_policy.hpp>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
 
    ll a, b; cin >> a >> b;
    if (a % 2 == b % 2) 
    {
        cout << (a+b) / 2 << endl;
    } else 
    {
        cout << "IMPOSSIBLE" << endl;
    }
 
    return 0;
}