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
#define MAX 50
#define IMX INT_MAX
#define IMN INT_MIN
#define LLMX LONG_LONG_MAX
#define LLMN LONG_LONG_MIN
#define pb push_back
#define pf push_front
#define LSB(x) (x & (-x))
#define sz(x) (ll)(x.size())
#define umap unordered_map
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
typedef pair<pii, pii> piiii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<piii> viii;
typedef vector<piiii> viiii;  

int n, m, s, ans = 0; 
bool dp[MAX][MAX], vis[MAX][MAX];
vector<string> strings;
set<pii> ranges;

bool palin(int l, int r, string str){
    if(l == r || l + 1 == r && str[l] == str[r]) return 1;
    if(vis[l][r]) return dp[l][r];
    vis[l][r] = 1;
    if(str[l] != str[r]) return dp[l][r] = 0;
    return dp[l][r] = palin(l + 1, r - 1, str);
}

int solve(string str){
    memset(dp, 0, sizeof dp);
    memset(vis, 0, sizeof vis);
    for(auto &range: ranges) if(!palin(range.fi - 1, range.se - 1, str)) return 0;
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);  cout.tie(NULL);
    cin >> n >> m >> s;
    strings.resize(n);
    for(int i=0; i<n; i++) cin >> strings[i];
    for(int i=0, l, r; i<m; i++){
        cin >> l >> r;
        ranges.insert({l, r});
    }
    for(auto &str: strings) ans += solve(str);
    cout << ans << nl;
    
    return 0;
}
