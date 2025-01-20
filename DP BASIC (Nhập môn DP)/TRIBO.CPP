/* Tư tưởng tương tự bài fibo */

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

int n;
ll dp[maxN];

void init(){
    cin >> n;
}

/*C1*/

ll tribo(int n){
    dp[0] = dp[1] = 0; dp[2] = 1;
    fr(i, 3, n){
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
        dp[i] %= MOD;
    }
    return dp[n];
}

/*C2*/

ll tribo2(int n){
    if (n == 0) return 0;
    if (n == 1) return 0;
    if (n == 2) return 1;

    ll prev3 = 0, prev2 = 0, prev1 = 1, curr = 0;
    fr(i, 3, n){
        curr = (prev1 + prev2 + prev3) % MOD;
        prev3 = prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    return curr;
}

void solve(){
    // cout << tribo1(n) << "\n";
    // cout << tribo2(n) << "\n";
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
    
    int tc; cin >> tc;
    while (tc--){
        init();
        solve();
    }
    
    cerr << "\nTime elapsed: " << TIME << "s.\n";
    return 0;
}
