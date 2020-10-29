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
    string st;
    map<char, double> jingles {{'W', 1.0}, {'H', 0.5}, {'Q', 1/4.0}, {'E', 1/8.0}, {'S', 1/16.0}, {'T', 1/32.0}, {'X', 1/64.0}};
    while (cin >> st, st[0] != '*') {
        int cnt = 0;
        double ans = 0.0;
        for (int i = 1; i < sz(st); i++) {
            if (st[i] == '/') {
                cnt = (ans == 1.0 ? ++cnt : cnt), ans = 0.0;
            }
            ans += jingles[st[i]];
        }
        cout << cnt << endl;
    }
}