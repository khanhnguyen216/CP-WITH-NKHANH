/* Tổ hợp đếm số HCN (HV là trường hợp đặc biệt) từ các que diêm đã cho */
/* Nguồn: Đề HSG11 tỉnh Quảng Ngãi 2022-2023 */

/*[Keep coding and you will get bugs! :D]*/
/* --------------------------------------*/
/*     khnguyen21th06 on screen yah~~    */ 
/*     Noob CPer :(                      */
/*---------------------------------------*/

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
#define hackSpeed ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)

typedef vector<int> vii;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int N = (int)3e6 + 9;
const int maxN = (int)1e6;
const int MOD = (int)1e9 + 7;

int n, a[maxN];
int d[maxN + 5] = {0};
ll hv = 0, hcn = 0;

void init(){
    cin >> n;
    fr(i, 1, n){
        cin >> a[i];
        d[a[i]]++;
    }
}

void solve(){
    fr(i, 1, maxN){
        if (d[i] >= 4) hv++; // que diêm có số lần xuất hiện ít nhất là 4 có thể tạo thành thành 1 hình vuông
        if (d[i] >= 2) hcn++; // que diêm có số lần xuất hiện ít nhất là 2 có thể tạo thành thành 1 hình chữ nhật
    }
    hv += 1ll * hcn * (hcn - 1) / 2; // công thức tổ hợp chập 2 của n (đã rút gọn)
    cout << hv;
}

_nkhanhcp{
    hackSpeed
    freopen("TASK.inp", "r", stdin);
    freopen("TASK.out", "w", stdout);
    
    init();
    solve();
    
    cerr << "Time elapsed: " << TIME << "s.\n";
    return 0;
}

/*[You are the best version of yourself <3]*/
/*[Keep trying until you don't need to introduce yourself!]*/
/*[Never give up on the path you are on :3]*/
/*MY DREAM WILL BE COME TRUE: CYBER SECURITY UIT TPHCM <3*/
