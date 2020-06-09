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
    int sizesb;
    string st, aux, lsb;
    set<string> sb;
    while (cin >> st) {
        for (int k = 1; k <= sz(st); k++) {
            sizesb = sz(st) - k;
            for (int i = 0; i <= sizesb; i++) {
                aux = st.substr(i, k);
                if (sb.find(aux) != sb.end())
                    lsb = (sz(lsb) <= sz(aux) ? aux : lsb);
                else
                    sb.insert(aux);
            }
        }
        aux = st.substr(sz(st) - (sz(lsb) * 2), sz(lsb));
        if (aux != lsb)
            while (!aux.empty()) {
                lsb.erase(lsb.begin());
                if (sb.find(lsb) != sb.end())
                    break;
            }
        cout << st.substr(0, sz(st) - sz(lsb)) << endl;
        lsb.clear();
        sb.clear();
    }
}