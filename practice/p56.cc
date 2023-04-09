#include<algorithm>
#include<array>
#include<bitset>
#include<cassert>
#include<chrono>
#include<cmath>
#include<map>
#include<numeric>
#include<queue>
#include<random>
#include<set>
#include<vector>
#include<cstring>
#include<functional>
#include<iomanip>
#include<iostream>

using namespace std;

template<class Fun>class y_combinator_result {
    Fun fun_;

public:
   template<class T> explicit y_combinator_result(T &&fun): fun_(std::forward<T>(fun)){}
   template<class ...Args>decltype(auto) operator()(Args &&...args){return fun_(std::ref(*this),std::forward<Args>(args)...);}
   };
template<class Fun>decltype(auto) y_combinator(Fun &&fun){return y_combinator<std::decay_t<Fun>>(std::forward<Fun>(fun));}  

template<typename A,typename B>ostream& operator<<(ostream &os,const pair<A, B> &p){return os<<'('<<p.first<<","<<p.second<<')';}
template<typename T_container, typename T = typename enable_if<!is_same<T_container,string>::value, typename T_container::value_type>::type>ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }

void dbg_out(){cerr << endl;}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T){cerr << ' '<< H; dbg_out(T...); }
#ifdef NEAL_DEBUG
#define dbg(...)cerr << "("<< #_VA_ARGS_<<"):",dbg_out(_VA_ARGS)
#else
#define dbg(...)
#endif

void running_cases(int test_case)
{
    int R,C;
    cin >> R >> C;
    string even, odd;

    for (int i = 0; i < C; i++)
    {
        even+= "+-";
        odd += "|.";;
    }
    even += '+';
    odd += '|';

    for (int i = 0; i <= 2 *R; i++)
    {
        string row = i% 2 == 0 ? even : odd;
        if (i <=1)
        {
            row = ".."+row.substr(2);
        }
        cout << row << '\n';
        
    }
    cout << "Case #"<<test_case << ":";
    
    
}
int main()
{

    int testing;
    cin >> testing;

    for (int h = 1; h <= testing; h++)
    {
       running_cases(h);
       cout << flush;
    }
    
}