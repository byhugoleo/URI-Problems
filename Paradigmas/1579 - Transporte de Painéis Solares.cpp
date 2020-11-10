#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sd second
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define boost ios_base::sync_with_stdio(false), cin.tie(NULL)
#define inp freopen("code.in", "r+", stdin)
#define out freopen("code.out", "w+", stdout)
#define debug(os, var)                                     \
    (os) << "DBG: " << __FILE__ << "(" << __LINE__ << ") " \
         << #var << " = [" << (var) << "]" << endl

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long int ll;

#define maxn 200

int main()
{
    boost;
    //inp;
    //out;
    int t, n, c, f;
    cin >> t;
    while (t--) {
        cin >> n >> c >> f;
        int v[maxn];
        int l = 1, r = (1 << 30), mid;
        for (int i = 0; i < n; i++)
            cin >> v[i], r += v[i];
        int ans, aws = (1 << 30);
        while (l <= r) {
            mid = (l + r) / 2;
            int sum = 0, cnt = 1;
            ans = -(1 << 30);
            for (int i = 0; i < n; i++) {
                if (sum + v[i] <= mid)
                    sum += v[i];
                else
                    ans = max(ans, sum), sum = v[i], cnt++;
            }
            ans = max(ans, sum);
            if (cnt <= c)
                r = mid - 1, aws = min(aws, ans);
            else if (cnt > c)
                l = mid + 1;
        }
        cout << aws << " $" << aws * c * f << endl;
    }
}
