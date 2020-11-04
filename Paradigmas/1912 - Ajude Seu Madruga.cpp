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

#define maxn (int)1e5 + 100

int main()
{
    boost;
    //inp;
    int n, a, v[maxn];
    while (cin >> n >> a, a + n) {
        int vmax = -(1 << 30);
        double ans = 0.0, mid, l = 0.0, r;
        for (int i = 0; i < n; i++)
            cin >> v[i], vmax = max(vmax, v[i]), ans += v[i];
        if (ans == a) {
            cout << ":D" << endl;
            continue;
        }
        r = vmax;
        while (r - l >= 1e-9) {
            mid = (r + l) / 2.0;
            ans = 0.0;
            for (int k = 0; k < n; k++)
                ans += (v[k] <= mid ? 0.0 : v[k] - mid);
            if (ans < a)
                r = mid;
            else if (ans > a)
                l = mid;
            else
                break;
        }
        if (mid <= 1e-9) {
            cout << "-.-" << endl;
            continue;
        }
        cout << fixed << setprecision(4) << mid << endl;
    }
}
