#include <iostream>
#include <set>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    set<int> bh;
    int N = 0, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        int w = 0, y = 0;
        cin >> w;
        cin >> y;
        if (w == 1)
        {
            bh.insert(y);
        }
        else if (w == 2)
        {
            bh.erase(y);
        }
        else
        {
            set<int>::iterator itr = bh.find(y);
            if (itr == bh.end())
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
    }

    return 0;
}