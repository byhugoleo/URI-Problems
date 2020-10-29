#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sd second
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define boost ios_base::sync_with_stdio(false), cin.tie(NULL)
#define inp freopen("code.in", "r+", stdin)
#define out freopen("code.out", "w+", stdout)
#define debug(os, var) \
  (os) << "DBG: " << __FILE__ << "(" << __LINE__ << ") "\
       << #var << " = [" << (var) << "]" << endl

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long int ll;

int main()
{
    boost;
    //inp;
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> m >> n;
        string x, y;
        map<string, string> translate;
        while (m--) {
            cin >> x;
            cin.ignore();
            getline(cin, y);
            translate[x] = y;
        }
        while (n--) {
            getline(cin, x);
            string ans;
            stringstream ss(x);
            while (ss >> x)
                if (!translate[x].empty())
                    ans += translate[x] + (!ss.good() ? "" : " ");
                else
                    ans += x + (!ss.good() ? "" : " ");
            cout << ans << endl;
        }
        cout << endl;
    }
}