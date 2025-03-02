/* Subtask 3 2e6 thì viết hàm sàng tổng ước, bé hơn viết hàm tổng ước thường, lớn hơn (10^12) thì PT TSNT */

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
const int maxN = (int)2e6 + 5;
const int MOD = (int)1e9 + 7;
const int inf = (int)2e9;
const long long oo = 9e18;

int a, b;
int dv[maxN];

void init(){
    cin >> a >> b;
}

void sangtong(){
    memset(dv, 0, sizeof(dv));
    fr(i, 1, maxN){
        for (int j = i; j <= maxN; j += i){
            dv[j] += i;
        }
    }
}

void solve(){
    int ans = 0;
    fr(i, a, b){
        if (dv[i] > 2 * i) ++ans;
    }
    cout << ans;
}

_hnahkk21_{
    #define task "SPECIAL"
    fast_io
    if (fopen(".INP", "r")){
        freopen(".INP", "r", stdin); freopen(".OUT", "w", stdout);
    }
    if (fopen(task".INP", "r")){
        freopen(task".INP", "r", stdin); freopen(task".OUT", "w", stdout);
    }
    
    sangtong();
    init();
    solve();
    
    cerr << "\nTime elapsed: " << TIME << "s.\n";
    return 0;
}
