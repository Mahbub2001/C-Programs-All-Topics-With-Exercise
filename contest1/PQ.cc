#include <iostream>
#include <set>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;
int main()
{
    string str, tur;
    set<string> s;
    while (cin >> str)
    {
        for (int i = 0; i < str.size(); i++)
            if (isalpha(str[i]))
                str[i] = tolower(str[i]);
            else
                str[i] = ' ';
        stringstream a(str);
        while (a >> tur)
            s.insert(tur);
    }
    set<string>::iterator b;
    for (b = s.begin(); b != s.end(); b++)
        cout << *b << endl;
    return 0;
}