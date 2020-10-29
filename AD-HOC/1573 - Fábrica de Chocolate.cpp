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
    int x, y, z, pv, av;
    while (scanf("%d %d %d", &x, &y, &z), x + y + z) {
        pv = x * y * z;
        int medp = (x + y + z) / 3;
        while (medp * medp * medp > pv)
            medp--;
        printf("%d\n", medp);
    }
}
