#include <iostream>
using namespace std;
int main()
{
    int t;
    int angle1, angle2, angle3;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> angle1 >> angle2 >> angle3;

        if (angle1 + angle2 + angle3 == 180)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
