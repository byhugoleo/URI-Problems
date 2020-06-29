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
    map<char, int> seq;
    int n;
    string st;
    cin >> n;
    for (int t = 0; t < n; t++) {
        cin >> st;
        for (int i = 0; i < sz(st); i++) {
            if (st[i] == '7')
                seq['7']++;
            else if (st[i] == 'Q') {
                if (seq['Q'] + 1 <= seq['7'])
                    seq['Q']++;
            }
            else if (st[i] == 'J') {
                if (seq['J'] + 1 <= seq['Q'])
                    seq['J']++;
            }
            else if (st[i] == 'K') {
                if (seq['K'] + 1 <= seq['J'])
                    seq['K']++;
            }
            else if (st[i] == 'A') {
                if (seq['A'] + 1 <= seq['K'])
                    seq['A']++;
            }
        }
        cout << sz(st) - seq['A'] * 5 << endl;
        seq.clear();
    }
}