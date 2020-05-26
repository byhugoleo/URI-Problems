#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sd second
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define boost ios_base::sync_with_stdio(false), cin.tie(NULL)
#define inp freopen("code.in", "r+", stdin)
#define out freopen("code.out", "w+", stdout)
#define debug(x) cout << "DEBUG: " << x << endl

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long int ll;

#define maxn (int)1e5 + 1000

int bit[maxn];

void update(int id)
{
    for (int i = id; i <= maxn; i += (i & (-i)))
        bit[i]++;  
}

int get(int id)
{
    int ans = 0;
    for (int i = id; i > 0; i -= (i & (-i)))
        ans += bit[i];
    return ans;
}

int query(int x, int y)
{
    return get(y > (maxn) ? maxn : y) - (x <= 1 ? 0 : get(x - 1));
}

int main()
{
    //inp;
    int ip, m, pc, na;
    while (scanf("%d %d", &ip, &m) != EOF) {
        for (int i = 0; i < m; i++) {
            scanf("%d %d", &pc, &na);
            if (query(pc - ip, pc + ip) <= na)
                update(pc);
        }
        printf("%d\n", query(1, (int)1e5));
        memset(bit, 0, sizeof bit);
    }
}