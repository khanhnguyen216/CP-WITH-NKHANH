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

ll n;

void init(){
    cin >> n;    
}

namespace sub1{
    int solve1(int n){
        int ans = 1;
        fr(i, 2, sqrt(n)){
            if (n % i == 0){
                if (i != n / i) ans += (int)i + (n / i);
                else ans += i;
            }
        }
        return ans == n;
    }
}

namespace sub2{
    ll res = 0;
    bool isPrime(ll n){
        if (n < 2) return false;
        else{
            fr(i, 2, sqrt(n)){
                if (n % i == 0) return false;
            }
        }
        return true;
    }
    ll solve2(ll n){
        fr(i, 1, 32){
            if (isPrime(i)){
                ll tmp = 1ll * pow(2, i) - 1;
                if (isPrime(tmp)){
                    res = 1ll * tmp * pow(2, i - 1);
                    if (n == res) return 1;
                }
            }
        }
        return 0;
    }
}

_nkhanhcp{
    hackSpeed
    freopen("TASK.inp", "r", stdin);
    freopen("TASK.out", "w", stdout);
    
    init();
    bool ok;
    if (n <= 1e6) ok = sub1::solve1(n);
    else ok = sub2::solve2(n);

    if (ok) cout << "YES";
    else cout << "NO";
    
    cerr << "Time elapsed: " << TIME << "s.\n";
    return 0;
}

/*[You are the best version of yourself <3]*/
/*[Keep trying until you don't need to introduce yourself!]*/
/*[Never give up on the path you are on :3]*/
/*MY DREAM WILL BE COME TRUE: CYBER SECURITY UIT TPHCM <3*/
