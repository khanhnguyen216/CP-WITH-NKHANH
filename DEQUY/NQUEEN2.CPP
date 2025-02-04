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
const int maxN = (int)1e6;
const int MOD = (int)1e9 + 7;
const int inf = (int)2e9;
const long long oo = 9e18;
const int LimN = 8;

int a[LimN + 5][LimN + 5];
bool cot[LimN + 5], d1[LimN * 2 + 2], d2[LimN * 2 + 2];
int ans;

void init(){
    fr(i, 1, LimN){
        fr(j, 1, LimN){
            cin >> a[i][j];
        }
    }
}

void Try(int i, int curr){
    if (i == LimN + 1){
        ans = max(ans, curr);
        return;
    }

    fr(j, 1, LimN){
        if (cot[j] || d1[i + j] || d2[i - j + LimN]) continue;
        cot[j] = d1[i + j] = d2[i - j + LimN] = true;
        Try(i + 1, curr + a[i][j]); // biến curr cộng với giá trị hiện tại ở hàng i cột j 
        cot[j] = d1[i + j] = d2[i - j + LimN] = false;
    }
}

void solve(){
    Try(1, 0);
    cout << ans;
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
