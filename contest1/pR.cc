#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p;
    string f1, s1;
    while (cin >> n)
    {
        map<string, string> m;
        getline(cin, f1);
        for (int i = 1; i <= n; i++)
        {
            getline(cin, f1);
            getline(cin, s1);
            m[f1] = s1;
        }
        cin >> p;
        getline(cin, f1);
        for (int i = 1; i <= p; i++)
        {
            getline(cin, f1);
            std::map<string, string>::iterator iter = m.find(f1);
            if (iter != m.end())
            {
                cout << m[f1] << endl;
            }
        }
    }

    return 0;
}
