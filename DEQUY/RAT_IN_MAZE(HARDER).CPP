/* Vẫn là bài đó nhưng khó hơn 1 chút */

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
const int maxN = (int)1e3 + 5;
const int MOD = (int)1e9 + 7;
const int inf = (int)2e9;
const long long oo = 9e18;

int n, a[maxN][maxN], ok = 0;

void init(){
    cin >> n;
    fr(i, 1, n) fr(j, 1, n) cin >> a[i][j];
}

void Try(int i, int j, string s){
    // Neu da den o (N, N)
    if (i == n && j == n){
        ok = 1;
        cout << s << endl;
    }

    // Di xuong
    if (i + 1 <= n && a[i + 1][j] == 1){
        s += "D";
        a[i + 1][j] = 0;
        Try(i + 1, j, s);
        a[i + 1][j] = 1;
        s.pob();
    }

    // Sang trai
    if (j - 1 >= 1 && a[i][j - 1] == 1){
        s += "L";
        a[i][j - 1] = 0;
        Try(i, j - 1, s);
        a[i][j - 1] = 1;
        s.pob();
    }

    // Sang phai
    if (j + 1 <= n && a[i][j + 1] == 1){
        s += "R";
        a[i][j + 1] = 0;
        Try(i, j + 1, s);
        a[i][j + 1] = 1;
        s.pob();
    }

    // Di len
    if (i - 1 >= 1 && a[i - 1][j] == 1){
        s += "U";
        a[i - 1][j] = 0;
        Try(i - 1, j, s);
        a[i - 1][j] = 1;
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
    a[1][1] = 0; // Danh dau o dau tien 
    Try(1, 1, "");
    if (!ok) cout << "-1\n";
    
    cerr << "\nTime elapsed: " << TIME << "s.\n";
    return 0;
}
