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
    int n;
    double ans = 0.0, temp = 0.0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        ans = (1.0 / (2.0 + temp)), temp = ans;
    ans += 1;
    printf("%.10lf\n", ans);
}
