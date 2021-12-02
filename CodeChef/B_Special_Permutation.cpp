/* Hritik Sharma */

#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define nline "\n"
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) (x).begin(), (x).end()
#define PI 3.141592653589793238462
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define vi vector<int>

#ifdef sharma_hritik
#define debug(x)
cerr << #x << " ";
_print(x);
cerr << endl;
#else
#define debug(x) ;
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

void _print(ll t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }
#define el "\n"

#define multiCase \
    int t;        \
    cin >> t;     \
    while (t--)
#define mst(a, b) memset(a, b, sizeof(a))
ll gcd(ll a, ll b)
{
    if (b > a)
    {
        return gcd(b, a);
    }
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
void solve()
{
    int a,b;
    cin>>a>>b;
    
}


int main()
{
#ifdef sharma_hritik
    freopen("Error.txt", "w", stderr);
#endif
    fastio();

    auto start1 = high_resolution_clock::now();
    multiCase
    {
        solve();
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef sharma_hritik
    cerr << "Time: " << duration.count() / 1000 << endl;
#endif
}