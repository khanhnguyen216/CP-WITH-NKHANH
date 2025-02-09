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

int n, a[105][105], x[100], ans = inf, amin = inf;
bool visited[100];

void init(){
    cin >> n;
    fr(i, 1, n){
        fr(j, 1, n){
            cin >> a[i][j];
            if (a[i][j] != 0) amin = min(amin, a[i][j]);
        }
    }
}

void Try(int i, int curr){
    fr(j, 1, n){
        if (!visited[j]){
            x[i] = j;
            visited[j] = true;
            curr += a[x[i - 1]][x[i]]; 
            // x[i - 1] : thành phố trước đó | x[i] : thành phố hiện tại (thành phố là j)
            if (i == n){
                ans = min(ans, curr + a[1][x[i]]); // cộng thêm chi phí khi quay lại thành phố 1
            }
            else if (curr + (n - i + 1) * amin < ans) // n - i + 1 : số thành phố còn lại cần phải đi qua
                Try(i + 1, curr);
            visited[j] = false;
            curr -= a[x[i - 1]][x[i]];
        }
    }
}

void solve(){
    x[1] = 1; // thành phố 1 là thành phố bắt đầu đi -> đã ở đó nên đánh dấu là 1
    visited[1] = true; // đánh dấu thành phố 1 là thành phố đã đi qua (thành phố bắt đầu đi)
    Try(2, 0);
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
