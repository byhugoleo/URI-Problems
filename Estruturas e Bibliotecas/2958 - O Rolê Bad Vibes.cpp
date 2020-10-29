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

int main()
{
    boost;
    //inp;
    int n, m;
    string st;
    vector<string> vs;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> st;
            vs.push_back(st);
        }
    }
    sort(all(vs), [](string a, string b) {
        if (a[1] == 'V' and b[1] == 'V')
            return a > b;
        else if (a[1] == 'V' and b[1] == 'D')
            return true;
        else if (a[1] == 'D' and b[1] == 'V')
            return false;
        else
            return a > b;
    });
    for (auto i : vs)
        cout << i << endl;
}