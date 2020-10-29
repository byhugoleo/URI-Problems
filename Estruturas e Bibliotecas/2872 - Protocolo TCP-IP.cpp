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
    string st, pkg, n;
    map<string, int> pkgord;
    while (cin >> st) {
        if (st[0] == '1') {
            while (cin >> pkg) {
                if (pkg[0] == '0')
                    break;
                cin >> n;
                pkgord[n]++;
            }
        }
        for (auto i : pkgord)
            for (int k = 0; k < i.sd; k++)
            cout << "Package" << " " << i.ft << endl;
        cout << endl;
        pkgord.clear();
    }
}