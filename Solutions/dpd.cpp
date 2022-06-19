#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize "Ofast"
#define frein freopen("input.txt", "r", stdin)
#define freout freopen("output.txt", "w", stdout)
#define ll long long
#define ull unsigned long long
#define MOD 1000000007
#define nl '\n'
#define fi first
#define se second
#define INF 0x3f3f3f3f
#define MAX 100005
#define IMX INT_MAX
#define IMN INT_MIN
#define LLMX LONG_LONG_MAX
#define LLMN LONG_LONG_MIN
#define pb push_back
#define pf push_front
#define LSB(x) (x & (-x))
#define sz(x) (ll)(x.size())
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
typedef pair<pii, pii> piiii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<piii> viii;
typedef vector<piiii> viiii;

ll N, W, w[105], v[105], dp[2][MAX];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);  cout.tie(NULL);
    cin >> N >> W;
    for(int i=1; i<=N; i++) cin >> w[i] >> v[i];
    for(int i=1; i<=N; i++){
        for(int j=0; j<=W; j++){
            dp[1][j] = dp[0][j];
            if(j - w[i] >= 0) dp[1][j] = max(dp[1][j], dp[0][j - w[i]] + v[i]);
        }
        swap(dp[0], dp[1]);
    }
    cout << dp[0][W] << nl;
    
    return 0;
};
