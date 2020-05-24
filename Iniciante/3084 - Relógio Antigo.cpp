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
    int h, m, cnth, cntm;
    const int hd = 360 / 12, md = 360 / 60;
    while (scanf("%d %d", &h, &m) != EOF) {
        cnth = cntm = 0;
        while (h)
            h -= hd, cnth++;
        while (m)
            m -= md, cntm++;
        printf("%s%d:%s%d\n", (cnth < 10 ? "0" : ""), cnth, (cntm < 10 ? "0" : ""), cntm);
    }
}