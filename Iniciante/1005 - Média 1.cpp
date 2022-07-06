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
    // inp;
    //out;
    double x, y;
    cin >> x >> y;
    cout << fixed << setprecision(5) << "MEDIA = " << (x * 3.5 + y * 7.5) / 11 << endl; 
}