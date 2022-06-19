#pragma GCC optimize "Ofast"
#include <bits/stdc++.h>
using namespace std; using pii = pair<int, int>;  using piii = pair<int, pii>;  using piiii = pair<pii, pii>;  using vi = vector<int>;  using vii = vector<pii>;  using viii = vector<piii>;  using viiii = vector<piiii>; using ll = long long; using ull = unsigned long long; 
#define frein freopen("input.txt", "r", stdin)
#define freout freopen("output.txt", "w", stdout)
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define LSB(x) (x & (-x))
#define sz(x) (int)(x.size())
#define ms(a, b) memset(a, b, sizeof a)

const int MOD = 1000000007, INF = 0x3f3f3f3f, MX = 400005, IMX = INT_MAX, IMN = INT_MIN;
const long long LLMX = LONG_LONG_MAX, LLMN = LONG_LONG_MIN;
const char nl = '\n';

ll n, ans;
vector<pair<ll, ll>> stk;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);  cout.tie(0);
    cin >> n;
    for(int i=1; i<=n; i++){
        ll a, freq = 0;
        cin >> a;
        for(; sz(stk) && stk.back().fi <= a; stk.ppb()){
            ans += stk.back().se;
            if(stk.back().fi == a) freq += stk.back().se;
        }   
        if(sz(stk)) ans++;
        stk.eb(a, freq + 1);
    }
    cout << ans << nl;
    return 0;
}
