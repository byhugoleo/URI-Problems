#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sd second
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define boost ios_base::sync_with_stdio(false), cin.tie(NULL)
#define inp freopen("code.in", "r+", stdin)
#define out freopen("code.out", "w+", stdout)
#define debug(args...){string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args);}

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long int ll;

void err(istream_iterator<string> it){}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args){
    cerr << *it << " = " << a << endl;
    err(++it, args...);
}
#define maxn (int)1e5 + 100

int cost[maxn];
vector<pair<int, int>> adj[maxn];

void dfs(int u, int p, int maxw) 
{
    for (auto i : adj[u])
        if (i.ft != p) {
            cost[i.ft] = i.sd;
            if (i.sd > maxw)
                cost[i.ft] = i.sd - abs((maxw - i.sd));
            dfs(i.ft, u, cost[i.ft]);
        }
}

int main()
{
    boost;
    //inp;
    int n, u, v, w;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> u >> v >> w;
        adj[u].emplace_back(make_pair(v, w));
        adj[v].emplace_back(make_pair(u, w));
    }
    dfs(n, n, (1 << 30));
    cout << cost[1];
    for (int i = 2; i < n; i++)
        cout << " " << cost[i];
    cout << endl;
}