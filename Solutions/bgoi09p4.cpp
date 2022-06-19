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

const int MOD = 1000000007, INF = 0x3f3f3f3f, MX = 1000005, IMX = INT_MAX, IMN = INT_MIN;
const long long LLMX = LONG_LONG_MAX, LLMN = LONG_LONG_MIN;
const char nl = '\n';

int n, h[MX], j[MX], res[MX]; deque<int> dq;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);  cout.tie(0);
    cin >> n;
    for(int i=0; i<n; i++) cin >> h[i];
    for(int i=0; i<n; i++) cin >> j[i];
    dq.pf(IMX);
    for(int i=n-1; i>=0; i--){
        int height = h[i], jumps = j[i];
        while(!dq.empty() && dq.front() <= height) dq.ppf();
        res[i] = dq[min(sz(dq)-1, jumps-1)];
        dq.pf(height);
    }
    for(int i=0; i<n; i++) cout << (res[i] == IMX ? -1 : res[i]) << ' ';
    return 0;
}
