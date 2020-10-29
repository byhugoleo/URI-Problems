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
    int x[5], y, ans = 0;
    for (int i = 0; i < 5; i++)
        scanf("%d", x + i);
    for (int i = 0; i < 5; i++) {
        scanf("%d", &y);
        if (y != x[i])
            ans++;
    }
    printf("%s\n", (ans == 5 ? "Y" : "N"));
}
