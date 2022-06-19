#pragma GCC optimize "Ofast"
#include <bits/stdc++.h>
using namespace std; using pii = pair<int, int>;  using piii = pair<int, pii>;  using piiii = pair<pii, pii>;  using vi = vector<int>;  using vii = vector<pii>;  using viii = vector<piii>;  using viiii = vector<piiii>; using ll = long long; using ull = unsigned long long; 
#define frein freopen("input.txt", "r", stdin)
#define freout freopen("output.txt", "w", stdout)
#define fi first
#define se second
#define pb push_back
#define pf push_front
#define ppb pop_back
#define LSB(x) (x & (-x))
#define sz(x) (int)(x.size())

const int MOD = 1000000007, INF = 0x3f3f3f3f, MX = 50, IMX = INT_MAX, IMN = INT_MIN, mod = 1000000;
const long long LLMX = LONG_LONG_MAX, LLMN = LONG_LONG_MIN;
const char nl = '\n';

ll n, dp[MX];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);  cout.tie(NULL);
    for(int tc=0; tc<5; tc++){
        cin >> n;
        memset(dp, 0, sizeof dp);
        dp[0] = 1;
        for(int i=2; i<=n; i++){
            dp[i] = (dp[i] + (3 * dp[i-2]) % mod) % mod;
            for(int j=4; i-j>=0; j+=2) dp[i] = (dp[i] + (2 * dp[i-j]) % mod) % mod;
        }
        cout << dp[n] << nl;
    }

    return 0;
}
