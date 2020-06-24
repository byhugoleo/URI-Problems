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

int bit[maxn];

void update(int id, int val)
{
    for (int i = id; i <= maxn; i += (i & (-i)))
        bit[i] += val;
}

int get(int id) {
    int ans = 0;
    for (int i = id; i > 0; i -= (i & (-i)))
        ans += bit[i];
    return ans;
}

int query(int x, int y)
{
    return get(y) - (x == 1 ? 0 : get(x - 1));
}

int main()
{
    boost;
    //inp;
    int n, q, v[maxn], op, x, y, ans, cnt;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        update(i, i);
    while (q--) {
        cin >> op;
        if (op == 1) {
            cin >> x >> y;
            int xx = query(x, x);
            int yy = query(y, y);
            update(x, -xx);
            update(y, -yy);
            update(x, yy);
            update(y, xx);
        } else {
            cin >> x;
            cnt = 0;
            ans = query(x, x);
            while (ans != x) {
                ans = query(ans, ans);
                cnt++;
            }
            cout << cnt << endl;
        }
    }
}