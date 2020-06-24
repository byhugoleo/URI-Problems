#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sd second
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define boost ios_base::sync_with_stdio(false), cin.tie(NULL)
#define inp freopen("code.in", "r+", stdin)
#define out freopen("code.out", "w+", stdout)
#define debug(args...){string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args);}

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long int ll;

void err(istream_iterator<string> it){}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args){
    cerr << *it << " = " << a << endl;
    err(++it, args...);
}

int main()
{
    boost;
    //inp;
    string a;
    ll b, ans;
    cin >> a >> b;
    ans = (ll)(a[0] - '0') % b;  
    for (int i = 1; i < sz(a); i++)
        ans = (ll)(ans * 10 + (a[i] - '0')) % b;
    cout << ans % b << endl;
}