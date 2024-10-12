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

int n, s, ok = 0;
pii p[maxN + 1];

void init(){
    cin >> s >> n;
    FOR(i, 0, n) cin >> p[i].fi >> p[i].sec;
}

void solve(){
    sort(p, p + n);
    ll power = s;
    FOR(i, 0, n){
        if (power > p[i].fi){
            power += p[i].sec;
            ok = 1;
        }
        else{
            ok = 0;
            break;
        }
    }
    if (ok) cout << "YES";
    else cout << "NO";
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
