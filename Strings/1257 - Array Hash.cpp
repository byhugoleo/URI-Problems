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

int main()
{
    //inp;
    boost;
    int n, l, ans;
    string st;
    scanf("%d", &n);
    for (int t = 0; t < n; t++) {
        scanf("%d", &l);
        ans = 0;
        for (int k = 0; k < l; k++) {
            cin >> st;
            for (int i = 0; i < sz(st); i++)
                ans += (st[i] - 'A') + k + i;
        }
        printf("%d\n", ans);
    }
}