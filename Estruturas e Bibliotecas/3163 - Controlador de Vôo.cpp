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
    string st;
    int idx;
    vector<string> planes[4];
    while (cin >> st, st[0] != '0') {
        if (st == "")
            continue;
        if (st[0] == '-')
            idx = (st[1] - '0') - 1;
        else
            planes[idx].push_back(st);
    }
    idx = 0;
    int pos[] = {0, 2, 1, 3}, ans[4] = {0}, cnt = 0;
    while (cnt != 4) {
        if (pos[idx] == -1) {
            idx = (idx + 1) % 4;
            continue;
        }
        if (ans[pos[idx]] < sz(planes[pos[idx]])) {
            cout << planes[pos[idx]][ans[pos[idx]]];
            ans[pos[idx]]++;
            if (cnt == 3 and ans[pos[idx]] == sz(planes[pos[idx]]))
                cout << endl;
            else
                cout << " ";
        }
        if (ans[pos[idx]] == sz(planes[pos[idx]])) {
            pos[idx] = -1;
            cnt++;
        }
        idx = (idx + 1) % 4;
    }
}