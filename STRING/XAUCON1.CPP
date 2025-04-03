/*  
    Author: _hnahkk.21
    Template code for CP (Competitive Programming)
*/

/* 21 . 06 . 2008 */

#include <bits/stdc++.h>
using namespace std;

void solve(){
    string b; cin >> b;
    string a; cin >> a;
    int ans = 0;
    auto pos = a.find(b);
    while (pos != string::npos){
        ++ans;
        pos = a.find(b, pos + 1); 
    }
    cout << ans;
}

int main(){
    /* Other tricks for the program */

    #define task "TASK"
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
    if (fopen(".INP", "r")){
        freopen(".INP", "r", stdin); freopen(".OUT", "w", stdout);
    }
    if (fopen(task".INP", "r")){
        freopen(task".INP", "r", stdin); freopen(task".OUT", "w", stdout);
    }
    #endif

    /* <---PROBLEM SOLUTION---> */

    solve();

    return 0;
}

/* Other template code of _hnahkk.21*/
