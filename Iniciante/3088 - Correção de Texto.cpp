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
    string st;
    while (getline(cin, st)) {
        for (int i = 0; i < sz(st); i++)
            if ((st[i] == ',' or st[i] == '.') and st[i - 1] == ' ')
                st.erase(st.begin() + (i - 1));
        cout << st << endl;
    }
}