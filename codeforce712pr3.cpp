#include <bits/stdc++.h>
using namespace std;
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define debug(x) cout << #x << ':' << x << endl
#define debugArr(A)       \
    cout << #A << ':';    \
    for (auto x : A)      \
        cout << x << ' '; \
    cout << endl
#define debugPairArr(A)                            \
    cout << #A << ':';                             \
    for (auto x : A)                               \
        cout<<' ' << x.first << ' '<<x.second<<' ';\
    cout << endl
#define debug2DArr(A)                   \
    cout<< #A <<':';                    \
    for(int i=0;i<A.size();i++){        \
      for(int j=0;j<A[i].size();i++){   \
        cout<<A[i][j]<<" ";}            \
      cout<<endl;}                      \

void input() {return;}
template<typename T1, typename... T2>
    void input(T1 & x, T2&... args){((cin >> x), input(args...));}
void wrt() { cout << endl; return;}
template<typename T1, typename... T2>
    void wrt(T1 x, T2... args){((cout << x << ' '), wrt(args...));}
template<typename T> void inputlst(T & lst, int x, int y)
    { for(int i = x ; i < y; i++ ) cin >> lst[i]; }
template<typename T> void printlst(T & lst, int x, int y)
    { for(int i = x ; i < y; i++ ) cout << lst[i] << " "; cout << endl; }

#define printlst(lst, N)for (ll i = 0; i < N; i++) cout << lst[i] << " ";cout << endl
#define inputlst(lst, N) for (ll i = 0; i < N; i++) cin >> lst[i]
#define sortlst(lst) sort(lst.begin(), lst.end())
#define setbits(n) __builtin_popcount(n)
#define sortarr(x, n) sort(x, x + n)
#define fora(i, x, y) for (ll i = x; i < y; ++i)
#define ford(i, x, y) for (ll i = x; i >= y; --i)
#define readArr(v) for(auto i : v)cin>>i;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<vl> vovl;
typedef vector<vi> vovi;
typedef vector<string> vs;
typedef set<ll> sl;
typedef unordered_map<ll, ll> uml;
typedef map<ll, ll> ml;


ll lcm(ll a, ll b)
{
  return a*b/__gcd(a,b);
}

// ############################# CODE IS HERE ##############################

void solve(){
    int n;
    string s;
    cin >> n >> s;
    int x = 0, y;
    int flag = 0;
    if (s[0] == '0' || s[n-1] == '0')
        flag++;
    for(int i=0; i<n; i++)
        if(s[i] == '0')
            x++;
    if (x%2)
        flag++;
    if(flag)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    string a1="(", a2="(";
    x=0, y=0;
    for(int i=1; i<n-1; i++)
    {
        if(s[i] == '1')
        {
            if(!x)
                a1.push_back('('), a2.push_back('(');
            else
                a1.push_back(')'), a2.push_back(')');
            x = !x;
        }
        if(s[i] == '0')
        {
            if(!y)
                a1.push_back('('), a2.push_back(')');
            else
                a2.push_back('('), a1.push_back(')');
            y = !y;
        }
    }
    a1.push_back(')'), a2.push_back(')');

    cout << a1 << endl << a2 << endl;
}


int main()
{
//   #ifndef ONLINE_JUDGE
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
//   freopen("error.txt", "w", stderr);
//   #endif
  boost;
  ll test=1; 
  cin >> test; 
  while(test--)
  {
    solve();
  }
  return 0;
}
