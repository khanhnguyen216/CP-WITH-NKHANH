/* Dùng quay lui tìm số lượng tập hợp có tổng = s với số lượng phần tử = k và không lớn hơn n*/

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

int x[maxN], n, k, s, ans = 0;

void Try(int i){
    fr(j, x[i - 1] + 1, n - k + i){
        x[i] = j;
        if (i == k){
            ll sum = 0;
            fr(l, 1, k)
                sum += x[l];
            if (sum == s) 
                ++ans;
        }
        else{
            Try(i + 1);
        }
    }
}

void solve(){
    cin >> n >> k >> s;
    memset(x, 0, sizeof x); // set tất cả giá trị trong mảng = 0 -> đánh dấu chỉ dùng chúng cho 1 lần thoả mãn yêu cầu hoán vị của đề bài
    Try(1);
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
