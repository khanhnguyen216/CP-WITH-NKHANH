/* Link submit: https://thptchuyen.ntucoder.net/Problem/Details/7038 */

/*  
    Author: _hnahkk.21
    Template code for CP (Competitive Programming)
*/

/* 21 . 06 . 2008 */

#include <bits/stdc++.h>
using namespace std;

// s[i] = '<' => dãy số từ vị trí i sẽ tăng
// s[i] = '>' => dãy số từ vị trí i sẽ giảm
// nhận thấy nếu a[i] > a[i + 1] sẽ thoả mãn nhưng nếu không > thì sẽ cập nhật bằng: a[i] = max(a[i], a[i + 1] + 1) -> khi đó a[i] > a[i + 1]

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

    string s; cin >> s;
    int n = s.size();
    vector<int> a(n + 1, 0);
    for (int i = 0; i < n; ++i){
        if (s[i] == '<') a[i + 1] = a[i] + 1; // duy trì dãy số luôn tăng
    }
    for (int i = n - 1; i >= 0; --i){
        if (s[i] == '>') a[i] = max(a[i], a[i + 1] + 1); // duy trì dãy số luôn giảm
    }
    long long ans = 0;
    for (int i = 0; i <= n; ++i) ans += a[i];
    cout << ans;

    return 0;
}

/* Other template code of _hnahkk.21*/
