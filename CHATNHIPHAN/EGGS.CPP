/* https://oj.vnoi.info/problem/hp_thpt_22_c */

// Cách 1: Code tham khảo từ AI
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

#define pii pair<int, int>

// nhận thấy số trứng luôn tăng theo thời gian -> tính đơn điệu -> chặt nhị phân

void solve(){
    int n; ll x; cin >> n >> x;
    pii a[n];
    int t = -inf, p = -inf;
    FOR(i, 0, n){
        cin >> a[i].fi >> a[i].sec;
        p = max(t, a[i].fi);
        t = max(t, a[i].sec);
    }
    ll l = 0, r = p + 1ll * x * t, ans = r; // số trứng ban đầu = 0
    while (l <= r){
        ll mid = l + (r - l) / 2;
        ll sum = 0;
        for (auto &[k, l] : a){
            if (mid >= k){
                sum += 1 + (mid - k) / l;
            }
            if (sum >= x) break;
        }
        if (sum >= x){
            ans = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
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
    
    solve();
    
    cerr << "\nTime elapsed: " << TIME << "s.\n";
    return 0;
}

// Cách 2: Code tham khảo từ lời giải qua công thức
Đặt p[i] = a[i].first, t[i] = a[i].second
Sau thời gian t, số trứng thu được là: 1 + (t - [p[i] / t[i]]) (với i = 1 và p[i] <= t)

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

int n; ll x;
pair<int, int> a[maxN];

bool check(ll t){   
    ll ans = 0;
    FOR(i, 0, n){
        if (a[i].fi <= t){
            ans += 1 + ((t - a[i].fi) / a[i].sec);
        }
    }
    return ans >= x;
}

void solve(){
    cin >> n >> x;
    FOR(i, 0, n) cin >> a[i].fi >> a[i].sec;
    sort(a, a + n);
    ll l = 0, r = 2e18;
    while (l <= r){
        ll mid = l + (r - l) / 2;
        if (check(mid)) r = mid - 1;
        else l = mid + 1;
    }
    cout << l;
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

    solve();
    
    cerr << "\nTime elapsed: " << TIME << "s.\n";
    return 0;
}
