/* Tìm đường đi của 1 con chuột trong 1 mê cung nhị phân */

/*  
    Author: _hnahkk.21
    Template code for CP (Competitive Programming)
*/

/* 21 . 06 . 2008 */

#include <bits/stdc++.h>
using namespace std;

bool hnahkk = 1;

#define ll long long
#define fi first
#define sec second
#define pb push_back
#define pob pop_back
#define lb lower_bound
#define ub upper_bound
#define endl '\n'
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define fr(i, a, b) for (int i = a; i <= b; ++i)
#define frd(i, a, b) for (int i = b; i >= a; --i)
#define _hnahkk21_ signed main()
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)

ll gcd(ll a, ll b) {return __gcd(a, b);}
ll lcm(ll a, ll b) {return a / gcd(a, b) * 1ll * b;}
ll lg(ll x) {return __lg(x);}

const int N = (int)3e6 + 9;
const int maxN = (int)1e5 + 5;
const int MOD = (int)1e9 + 7;
const int inf = (int)2e9;
const long long oo = 9e18;

int n, a[maxN][maxN];

void init(){
    cin >> n;
    fr(i, 1, n) fr(j, 1, n) cin >> a[i][j];
}

void Try(int i, int j, string s){
    if (i == n && j == n) cout << s << endl;
    if (i + 1 <= n && a[i + 1][j] == 1){
        s += "D";
        Try(i + 1, j, s);
        s.pob();
    }
    if (j + 1 <= n && a[i][j + 1] == 1){
        s += "R";
        Try(i, j + 1, s);
        s.pob();
    }
}

_hnahkk21_{
    #define task "TASK"
    fast_io
    if (fopen(".INP", "r")){
        freopen(".INP", "r", stdin); freopen(".OUT", "w", stdout);
    }
    if (fopen(task".INP", "r")){
        freopen(task".INP", "r", stdin); freopen(task".OUT", "w", stdout);
    }
    
    init();
    Try(1, 1, "");
    
    cerr << "\nTime elapsed: " << TIME << "s.\n";
    return 0;
}
