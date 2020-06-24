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

#define maxn (int)1e3 + 1000

int main()
{
    boost;
    //inp;
    int n, q, op, x, y, v[maxn];
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        v[i] = i;
    while (q--) {
        cin >> op;
        if (op == 1) {
            cin >> x >> y;
            int xx = v[x], yy = v[y];
            v[x] = yy;
            v[y] = xx;
        } else {
            cin >> x;
            int ans, cnt = 0;
            ans = v[x];
            while (ans != x)
                ans = v[ans], cnt++;
            cout << cnt << endl;
        }
    }
}