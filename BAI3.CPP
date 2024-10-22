/* Nguồn: Đề HSG11 tỉnh Quảng Ngãi 2022-2023 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fi first
#define sec second
#define pb push_back
#define pob pop_back
#define lb lower_bound
#define ub upper_bound
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define fr(i, a, b) for (int i = a; i <= b; ++i)
#define frd(i, a, b) for (int i = b; i >= a; --i)
#define _nkhanhcp signed main()
#define hackSpeed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)

typedef vector<int> vii;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int N = (int)3e6 + 9;
const int maxN = (int)1e6;
const int MOD = (int)1e9 + 7;
const int inf = (int)2e9;

int n, k, a[maxN];
int idxStart = 0;
int ans = 0, ok = 0;

void init(){
    cin >> n >> k;
    fr(i, 1, n) cin >> a[i];
}

void solve(){
    fr(i, 1, n){
        ll sum = 0;
        fr(j, i, n){
            sum += a[j];
            if (sum == k * (j-i+1) && (j - i + 1) > ans){ // Không dùng toán tử / mà phải biến đổi phương trình
                ok = 1;
                ans = j - i + 1;
                idxStart = i;
            }
        }
    }
    if (ok) cout << idxStart << " " << ans;
    else cout << "0";
}

_nkhanhcp{
    hackSpeed
    freopen("BAI3.INP", "r", stdin);
    freopen("BAI3.OUT", "w", stdout);
    
    init();
    solve();
    
    cerr << "Time elapsed: " << TIME << "s.\n";
    return 0;
}
