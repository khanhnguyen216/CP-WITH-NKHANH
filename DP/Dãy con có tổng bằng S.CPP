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
const int maxN = (int)1e6 + 5;
const int MOD = (int)1e9 + 7;
const int inf = (int)2e9;
const long long oo = 9e18;

int n, s, a[maxN];  

void init(){
    cin >> n >> s;
    FOR(i, 0, n) cin >> a[i];
}

void solve(){
    int dp[s + 1] = {0};
    dp[0] = 1;
    FOR(i, 0, n){
        for (int j = s; j >= a[i]; --j){
            if (dp[j - a[i]]){
                dp[j] = 1;
            }
        }
    }
    cout << (dp[s] ? 1 : 0);
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
    solve();
    
    cerr << "\nTime elapsed: " << TIME << "s.\n";
    return 0;
}
